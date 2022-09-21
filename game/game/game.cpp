#include "adts/cellStack.hpp"
#include "adts/cell2D.hpp"
#include "adts/node.hpp"
#include "game/utils.hpp"
#include <iostream>

bool isAValidCell(adts::Cell2D cell, int size){
	return (cell.getRow() >=0 && cell.getRow() < size &&
			cell.getCol()>=0 && cell.getCol() < size);
}
bool pathExists(bool** lab, int size, adts::Cell2D start, adts::Cell2D end){
	bool ans = false;
	adts::CellStack stack;
	stack.push(new adts::Node(start));
	bool** visit = game::createLab(size, false);
	int row = 0, col = 0;
	while (!ans && !stack.isEmpty()){
		adts::Node* node = stack.top();
		row = node->getData().getRow();
		col = node->getData().getCol();
		visit[row][col] = true;
		if (end.getRow() == row && end.getCol() == col){
			ans = true;
		}
		else{
			stack.pop();
			adts::Cell2D cellTop(row - 1, col);
			adts::Cell2D cellBottom(row + 1, col);
			adts::Cell2D cellLeft(row, col - 1);
			adts::Cell2D cellRight(row, col + 1);
			if (isAValidCell(cellTop, size) &&
					lab[cellTop.getRow()][cellTop.getCol()] &&
					!visit[cellTop.getRow()][cellTop.getCol()]){
				stack.push(new adts::Node(cellTop));
			}
			if (isAValidCell(cellBottom, size) &&
					lab[cellBottom.getRow()][cellBottom.getCol()] &&
					!visit[cellBottom.getRow()][cellBottom.getCol()]){
				stack.push(new adts::Node(cellBottom));
			}
			if (isAValidCell(cellLeft, size) &&
					lab[cellLeft.getRow()][cellLeft.getCol()] &&
					!visit[cellLeft.getRow()][cellLeft.getCol()]){
				stack.push(new adts::Node(cellLeft));
			}
			if (isAValidCell(cellRight, size) &&
					lab[cellRight.getRow()][cellRight.getCol()] &&
					!visit[cellRight.getRow()][cellRight.getCol()]){
				stack.push(new adts::Node(cellRight));
			}

		}
	}

	game::deleteLab(visit, size);
	return ans;
}

int main(int nargas, char** vargs){
	bool data[8][8] ={{1,1,1,0,1,0,1,1},
					  {1,0,1,1,1,1,0,1},
					  {0,0,1,1,1,1,0,1},
					  {1,0,1,1,0,1,0,1},
					  {1,0,0,0,1,1,1,1},
					  {1,1,0,1,1,0,0,0},
					  {1,1,1,1,0,1,1,1},
					  {1,1,1,1,0,1,1,1},
					 };

	int size = 8;
	bool** lab = game::createLab(size, false);
	game::copyData(lab, size, data);

	adts::Cell2D start(1,2);
	adts::Cell2D end(0,0);
	bool ans = pathExists(lab, size, start, end);
	if (ans){
		std::cout<<"Existe Ruta" <<std::endl;
	}
	else{
		std::cout<<"No Existe Ruta" <<std::endl;
	}
	game::deleteLab(lab, size);
	return 0;
}

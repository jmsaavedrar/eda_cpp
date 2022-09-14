/*
 * cell2D.cpp
 *
 *  Created on: Sep 13, 2022
 *      Author: jsaavedr
 */

#include "adts/cell2D.hpp"

#include <iostream>

namespace adts {

Cell2D::Cell2D():row(-1), col(-1) {
	// TODO Auto-generated constructor stub
}

Cell2D::Cell2D(int _row, int _col): row(_row), col(_col){

}
void Cell2D::setRow(int _row){
	row = _row;
}

void Cell2D::setCol(int _col){
	col = _col;
}

int Cell2D::getRow(){
	return row;
}

int Cell2D::getCol(){
	return col;
}

void Cell2D::print(){
	std::cout << "(" << row<< "," << col << ")" << std::endl;
}

Cell2D::~Cell2D() {
	// TODO Auto-generated destructor stub
}

} /* namespace adts */

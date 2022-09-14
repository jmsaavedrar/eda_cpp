/*
 * cell2D.hpp
 *
 *  Created on: Sep 13, 2022
 *      Author: jsaavedr
 */

#ifndef GAME_INCLUDE_ADTS_CELL2D_HPP_
#define GAME_INCLUDE_ADTS_CELL2D_HPP_

namespace adts {

class Cell2D {
private:
	int row;
	int col;
public:
	Cell2D();
	Cell2D(int _row, int _col);
	void setRow(int _row);
	void setCol(int _col);
	int getRow();
	int getCol();
	void print();
	virtual ~Cell2D();
};

} /* namespace adts */

#endif /* GAME_INCLUDE_ADTS_CELL2D_HPP_ */

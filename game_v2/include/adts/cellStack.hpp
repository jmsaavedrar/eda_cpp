/*
 * cellStack.hpp
 *
 *  Created on: Sep 13, 2022
 *      Author: jsaavedr
 */

#ifndef GAME_INCLUDE_ADTS_CELLSTACK_HPP_
#define GAME_INCLUDE_ADTS_CELLSTACK_HPP_

#include "adts/node.hpp"

namespace adts {

class CellStack {
public:
private:
	Node* head;
public:
	CellStack();
	void push(Node* node);
	void pop();
	Node* top();
	bool isEmpty();
	void clear();
	virtual ~CellStack();
};

} /* namespace adts */

#endif /* GAME_INCLUDE_ADTS_CELLSTACK_HPP_ */

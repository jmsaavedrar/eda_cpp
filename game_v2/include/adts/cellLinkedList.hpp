/*
 * cellsLinkedList.hpp
 *
 *  Created on: Sep 14, 2022
 *      Author: jsaavedr
 */

#ifndef CELLSLINKEDLIST_HPP_
#define CELLSLINKEDLIST_HPP_

#include "adts/node.hpp"
namespace adts {

class CellLinkedList {
private:
Node* head;
public:
	CellLinkedList();
	void insertAtFirst(Node* node);
	void removeFirst();
	void clear();
	void print();
	virtual ~CellLinkedList();
};

} /* namespace adts*/

#endif /* CELLSLINKEDLIST_HPP_ */

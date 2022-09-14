/*
 * cellsLinkedList.cpp
 *
 *  Created on: Sep 14, 2022
 *      Author: jsaavedr
 */

#include "adts/cellLinkedList.hpp"
#include <iostream>

namespace adts{

CellLinkedList::CellLinkedList():head(nullptr) {
	// TODO Auto-generated constructor stub

}

void CellLinkedList::insertAtFirst(Node* node){
	node->setNext(head);
	head=node;
}

void CellLinkedList::print(){
	Node* ptr = head;
	while(ptr!=nullptr){
		ptr->print();
		std::cout<<"-"<<std::flush;
		ptr = ptr->getNext();
	}
	std::cout<<std::endl;
}

void CellLinkedList::removeFirst(){
	if (head != nullptr){
		Node* ptr = head;
		head = head->getNext();
		delete ptr;
	}
}

void CellLinkedList::clear(){

	while(head != nullptr){
		removeFirst();
	}
}

CellLinkedList::~CellLinkedList() {
	clear();
}

} /* namespace trees */

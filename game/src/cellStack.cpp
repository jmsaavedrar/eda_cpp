/*
 * cellStack.cpp
 *
 *  Created on: Sep 13, 2022
 *      Author: jsaavedr
 */

#include "adts/cellStack.hpp"

namespace adts {

CellStack::CellStack():head(nullptr) {
	// TODO Auto-generated constructor stub

}

void CellStack::push(Node* node){
	if (head == nullptr){
		head = node;
	}
	else{
		node->setNext(head);
		head = node;
	}
}

void CellStack::pop(){
	if (!isEmpty()){
		Node* ptr = head;
		head = head->getNext();
		delete ptr;
	}
}

Node* CellStack::top(){
	return head;
}

bool CellStack::isEmpty(){
	return (head == nullptr);
}

void CellStack::clear(){
	while (!isEmpty()){
		pop();
	}
}

CellStack::~CellStack() {
	clear();
}

} /* namespace adts */

/*
 * stack.cpp
 *
 *  Created on: Aug 18, 2022
 *      Author: jsaavedr
 */

#include "adts/stack.hpp"

namespace eda {

Stack::Stack():head(nullptr) {
	// TODO Auto-generated constructor stub

}


void Stack::push(Node* node){
	if (head == nullptr){
		head = node;
	}
	else{
		node->setNext(head);
		head = node;
	}
}

void Stack::pop(){
	if (!isEmpty()){
		Node* ptr = head;
		head = head->getNext();
		delete ptr;
	}
}

Node* Stack::top(){
	return head;
}

bool Stack::isEmpty(){
	return (head == nullptr);
}

void Stack::clear(){
	while (!isEmpty()){
		pop();
	}
}

Stack::~Stack() {
	clear();
}

} /* namespace eda */

/*
 * stack.cpp
 *
 *  Created on: Aug 18, 2022
 *      Author: jsaavedr
 */

#include "lLists/stack.hpp"
#include <iostream>

namespace eda {

Stack::Stack():head(nullptr) {
	// TODO Auto-generated constructor stub

}

void Stack::push(int val){
	Node* node = new Node(val);
	push(node);
}

void Stack::push(Node* node){
	node->setNext(head);
	head = node;
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
	std::cout<<"destructor Stack"<<std::endl;
	clear();
}

} /* namespace eda */

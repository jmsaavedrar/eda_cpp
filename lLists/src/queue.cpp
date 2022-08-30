/*
 * queue.cpp
 *
 *  Created on: Aug 18, 2022
 *      Author: jsaavedr
 */

#include "lLists/queue.hpp"

namespace eda {

Queue::Queue():head(nullptr), tail(nullptr) {
	// TODO Auto-generated constructor stub

}

void Queue::push(int val){
	Node* node = new Node(val);
	push(node);
}

void Queue::push(Node* node){
	if (tail == nullptr){
		head = node;
		tail = node;
	}
	else{
		tail->setNext(node);
		tail = node;
	}
}

void Queue::pop(){
	if (!isEmpty()){
		Node* ptr = head;
		head = head->getNext();
		delete ptr;
		if (head == nullptr){
			tail = nullptr;
		}
	}
}

Node* Queue::top(){
	return head;
}

bool Queue::isEmpty(){
	return (head == nullptr);
}

void Queue::clear(){
	while (!isEmpty()){
		pop();
	}
}

Queue::~Queue() {
	clear();
}

} /* namespace eda */

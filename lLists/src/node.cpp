/*
 * nodo.cpp
 */

#include "lLists/node.hpp"
#include <iostream>

namespace eda {


Node::Node(): data(-1), ptrNext(nullptr) {
}

Node::Node(int val, Node* next): data(val), ptrNext(next) {

}

void Node::setData(int _data){
	data = _data;
}

void Node::setNext(Node* next){
	ptrNext = next;
}

int Node::getData(){
	return data;
}
Node* Node::getNext(){
	return ptrNext;
}

void Node::print(){
	std::cout << data ;
}

Node::~Node() {

}

} /* namespace eda */

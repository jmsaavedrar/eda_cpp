/*
 * nodo.cpp
 */

#include "adts/node.hpp"
#include <iostream>

namespace eda {


Node::Node(): data('\0'), ptrNext(nullptr) {
}

Node::Node(char val, Node* next): data(val), ptrNext(next) {

}

void Node::setData(char _data){
	data = _data;
}

void Node::setNext(Node* next){
	ptrNext = next;
}

char Node::getData(){
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

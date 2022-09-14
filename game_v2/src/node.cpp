/*
 * node.hpp
 *
 *  Created on: Sep 13, 2022
 *      Author: jsaavedr
 */

#include "adts/node.hpp"

namespace adts {

Node::Node(): data(), ptrNext(nullptr), ptrParent(nullptr) {
}

Node::Node(Cell2D val, Node* next, Node* parent): data(val), ptrNext(next), ptrParent(parent) {

}

void Node::setData(Cell2D _data){
	data = _data;
}

void Node::setNext(Node* next){
	ptrNext = next;
}

void Node::setParent(Node* parent){
	ptrParent = parent;
}

Cell2D Node::getData(){
	return data;
}

Node* Node::getNext(){
	return ptrNext;
}

Node* Node::getParent(){
	return ptrParent;
}

void Node::print(){
	data.print() ;
}

Node::~Node() {

}


} /* namespace adts */



/*
 * node.hpp
 *
 *  Created on: Sep 13, 2022
 *      Author: jsaavedr
 */

#include "adts/node.hpp"

namespace adts {

Node::Node(): data(), ptrNext(nullptr) {
}

Node::Node(Cell2D val, Node* next): data(val), ptrNext(next) {

}

void Node::setData(Cell2D _data){
	data = _data;
}

void Node::setNext(Node* next){
	ptrNext = next;
}

Cell2D Node::getData(){
	return data;
}
Node* Node::getNext(){
	return ptrNext;
}

void Node::print(){
	data.print() ;
}

Node::~Node() {

}


} /* namespace adts */



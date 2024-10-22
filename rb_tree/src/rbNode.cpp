/*
 * rbNode.cpp
 *
 *  Created on: Sep 2, 2022
 *      Author: jsaavedr
 */

#include "trees/rbNode.hpp"
#include <cmath>
#include <iostream>

namespace trees {

RBNode::RBNode():
		data(-1), ptrLeft(nullptr), ptrRight(nullptr),
		parent(nullptr), color(NodeColor::RED), type(NodeType::LEFT) {
	// TODO Auto-generated constructor stub
}

RBNode::RBNode(int val, RBNode* _parent):
		data(val), ptrLeft(nullptr), ptrRight(nullptr),
		parent(_parent), color(NodeColor::RED), type(NodeType::LEFT){
}

void RBNode::setLeft(RBNode* node){
	ptrLeft = node;
	if (ptrLeft!= nullptr){
		ptrLeft->setParent(this);
		ptrLeft->setType(NodeType::LEFT);
	}

}

void RBNode::setRight(RBNode* node){
	ptrRight = node;
	if (ptrRight!= nullptr){
		ptrRight->setParent(this);
		ptrRight->setType(NodeType::RIGHT);
	}
}

void RBNode::setColor(NodeColor c){
	color = c;
}

void RBNode::setType(NodeType t){
	type = t;
}

bool RBNode::isLeft(){
	return (type == NodeType::LEFT);
}

bool RBNode::isRight(){
	return (type == NodeType::RIGHT);
}

void RBNode::setData(int val){
	data = val;
}

void RBNode::setParent(RBNode* node){
	parent = node;
}

RBNode* RBNode::getLeft(){
	return ptrLeft;
}

RBNode* RBNode::getRight(){
	return ptrRight;
}

int RBNode::getData(){
	return data;
}

RBNode* RBNode::getParent(){
	return parent;
}


char RBNode::getColor(){
	return color==NodeColor::RED?'R':'B';
}

char RBNode::getType(){
	return isLeft()?'L':'R';
}


RBNode::~RBNode() {
	if (ptrLeft != nullptr){
		delete ptrLeft;
	}
	if (ptrRight != nullptr){
		delete ptrRight;
	}
}

} /* namespace trees */

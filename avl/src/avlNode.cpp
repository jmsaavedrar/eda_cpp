/*
 * abbNode.cpp
 *
 *  Created on: Sep 2, 2022
 *      Author: jsaavedr
 */

#include "trees/avlNode.hpp"
#include <cmath>
#include <iostream>

namespace trees {

AVLNode::AVLNode():
		data(-1), ptrLeft(nullptr), ptrRight(nullptr),
		parent(nullptr), hLeft(0), hRight(0),type(NodeType::LEFT) {
	// TODO Auto-generated constructor stub
}

AVLNode::AVLNode(int val, AVLNode* _parent):
		data(val), ptrLeft(nullptr), ptrRight(nullptr),
		parent(_parent), hLeft(0), hRight(0), type(NodeType::LEFT){
}

void AVLNode::setLeft(AVLNode* node){
	ptrLeft = node;
	if (ptrLeft!= nullptr){
		ptrLeft->setParent(this);
		ptrLeft->setType(NodeType::LEFT);
	}

}

void AVLNode::setRight(AVLNode* node){
	ptrRight = node;
	if (ptrRight!= nullptr){
		ptrRight->setParent(this);
		ptrRight->setType(NodeType::RIGHT);
	}
}

void AVLNode::setType(NodeType t){
	type = t;
}

bool AVLNode::isLeft(){
	return (type == NodeType::LEFT);
}

bool AVLNode::isRight(){
	return (type == NodeType::RIGHT);
}

void AVLNode::setData(int val){
	data = val;
}

void AVLNode::setParent(AVLNode* node){
	parent = node;
}

void AVLNode::setRightHeight(int h){
	hRight = h;
}

void AVLNode::setLeftHeight(int h){
	hLeft = h;
}

AVLNode* AVLNode::getLeft(){
	return ptrLeft;
}

AVLNode* AVLNode::getRight(){
	return ptrRight;
}

int AVLNode::getData(){
	return data;
}

int AVLNode::getLeftHeight(){
	return hLeft;
}

int AVLNode::getRightHeight(){
	return hRight;
}

int AVLNode::getHeight(){
	return hLeft>hRight?hLeft:hRight;
}
AVLNode* AVLNode::getParent(){
	return parent;
}

int AVLNode::getBalanceScore(){
	return std::abs(hLeft-hRight);
}

char AVLNode::getType(){
	return isLeft()?'L':'R';
}
void AVLNode::updateChildrenHeights(){
	if (ptrLeft != nullptr){
		setLeftHeight(ptrLeft->getHeight() + 1);
	}
	else{
		setLeftHeight(0);
	}
	if (ptrRight != nullptr){
		setRightHeight(ptrRight->getHeight() + 1);
	}
	else{
		setRightHeight(0);
	}
}


AVLNode::~AVLNode() {
	if (ptrLeft != nullptr){
		delete ptrLeft;
	}
	if (ptrRight != nullptr){
		delete ptrRight;
	}
}

} /* namespace trees */

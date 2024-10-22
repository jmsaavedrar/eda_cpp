/*
 * abb.cpp
 *
 *  Created on: Sep 2, 2022
 *      Author: jsaavedr
 */

#include "trees/rb.hpp"
#include <iostream>


namespace trees {

RB::RB():root(nullptr) {
	// TODO Auto-generated constructor stub
}

void RB::balance(RBNode* node){
	//TODO
}

RotationType RB::getRotationType(RBNode* node){
	/*this will run if node is unbalanced*/
	RotationType rType = RotationType::case_1;
	//TODO
	return rType;
}

// void RB::do_case_1(RBNode* node){
// 	//TODO
// }



void RB::insert(int val, RBNode* node){

	if (val < node->getData()){
		if (node->getLeft() == nullptr){
			node->setLeft(new RBNode(val, node));
		}
		else{
			insert(val, node->getLeft());
		}
	}
	else{
		if (node->getRight() == nullptr){
			node->setRight(new RBNode(val, node));
		}
		else{
			insert(val, node->getRight());
		}
	}
	
	//TODO
	//add code to balance according to the Red-Black rotations



}

void RB::insert(int val){
	if (root == nullptr){
		root = new RBNode(val);
	}
	else{
		insert(val, root);
	}
}

RBNode* RB::find(int val, RBNode* node){
	RBNode* ans = nullptr;
	if (node->getData() == val){
		ans = node;
	}
	else{
		if (val < node->getData()){
			find(val, node->getLeft());
		}
		else{
			find(val, node->getRight());
		}
	}
	return ans;
}

RBNode* RB::find(int val){
	RBNode* ans = nullptr;
	ans = find(val, root);
	return ans;
}

void RB::traverse(RBNode* node, int label){
	if (node != nullptr){
		for (int i = 0; i < label; i++){
			std::cout << "*" << std::flush;
		}
		char T = node->isLeft()?'L':'R';
		std::cout << node->getData() << "  " << T <<std::endl;
		traverse(node->getLeft(), label + 1);
		traverse(node->getRight(), label + 1);
	}
}

void RB::traverse(){
	traverse(root, 1);
}


RB::~RB() {
	delete root;
}

} /* namespace trees */

/*
 * treeNode.cpp
 *
 *  Created on: Aug 30, 2022
 *      Author: jsaavedr
 */

#include "trees/treeNode.hpp"

namespace trees {

TreeNode::TreeNode(): parent(nullptr), data(-1), children(new TreeList()) {
}

TreeNode::TreeNode(int val): parent(nullptr), data(val), children(new TreeList()) {
}

void TreeNode::setParent(TreeNode* node){
	parent = node;
}
void TreeNode::setData(int val){
		data = val;
}
void TreeNode::setChildren(TreeList* list){
	children = list;
}
TreeNode* TreeNode::getParent(){
	return parent;
}
int TreeNode::getData(){
	return data;
}
TreeList* TreeNode::getChildren(){
	return children;
}

TreeNode::~TreeNode() {
	//action when a treeNode is deleted
	//delete the descendants only
	if (children != nullptr){
		delete children;
	}
}

} /* namespace trees */

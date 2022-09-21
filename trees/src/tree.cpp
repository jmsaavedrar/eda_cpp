/*
 * tree.cpp
 *
 *  Created on: Aug 31, 2022
 *      Author: jsaavedr
 */

#include "trees/tree.hpp"
#include <iostream>

namespace trees {

Tree::Tree(): root(nullptr) {

}

void Tree::setRoot(TreeNode* node){
	if (root == nullptr){
		root = node;
	}
}
void Tree::insert(TreeNode* child, TreeNode* parent){
	if (parent != nullptr){
		parent->getChildren()->insertFirst(child);
	}
}

void Tree::insert(int val, int val_parent){
	TreeNode* parent = find(val_parent);
	if (parent != nullptr){
		TreeNode* child = new TreeNode(val);
		insert(child, parent);
		std::cout << "insertado " << val << " in " << val_parent << " at " << parent << std::endl;
	}
}

TreeNode* Tree::find_rec(int val, TreeNode* node){
	TreeNode* ans = nullptr;
	if (node != nullptr){
		if (node->getData() == val){
			ans = node;
		}
		else{ // search in children
			TreeList* childrenList = node->getChildren();
			TreeListNode* ptr = childrenList->getHead();
			while (ptr!=nullptr && ans == nullptr){
				ans = find_rec(val, ptr->getData());
				ptr = ptr->getNext();
			}
		}
	}
	return ans;
}

TreeNode* Tree::find(int val){
	TreeNode* ans = find_rec(val, root);
	return ans;
}


void Tree::traverse_rec(TreeNode* node, int level){
	if (node != nullptr){
		std::cout << std::string(level*2, '-');
		std::cout<<node->getData() << " at level " << level <<std::endl;
		TreeList* childrenList = node->getChildren();
		TreeListNode* ptr = childrenList->getHead();
		while (ptr!=nullptr){
			traverse_rec(ptr->getData(), level + 1);
			ptr = ptr->getNext();
		}
	}
}

void Tree::traverse(){
	traverse_rec(root, 1);
}

Tree::~Tree() {
	delete root;
}

} /* namespace trees */

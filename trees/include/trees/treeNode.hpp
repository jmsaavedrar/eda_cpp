/*
 * treeNode.hpp
 *
 *  Created on: Aug 30, 2022
 *      Author: jsaavedr
 */

#ifndef TREENODE_HPP_
#define TREENODE_HPP_

#include "trees/treeList.hpp"

namespace trees {

class TreeList;
class TreeNode {
private:
	TreeNode* parent;
	int data; //data can be of any type
	TreeList* children;
public:
	TreeNode();
	TreeNode(int val);
	void setParent(TreeNode* node);
	void setData(int val);
	void setChildren(TreeList* list);
	TreeNode* getParent();
	int getData();
	TreeList* getChildren();
	virtual ~TreeNode();
};

} /* namespace trees */

#endif /* TREENODE_HPP_ */

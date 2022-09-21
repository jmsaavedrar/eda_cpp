/*
 * childNode.hpp
 *
 *  Created on: Aug 30, 2022
 *      Author: jsaavedr
 */

#ifndef CHILDNODE_HPP_
#define CHILDNODE_HPP_

#include "trees/treeNode.hpp"

namespace trees {
class TreeNode;
class TreeListNode {
private:
	TreeNode* data;
	TreeListNode* ptrNext;

public:
	TreeListNode();
	TreeListNode(TreeNode* _data, TreeListNode* next = nullptr);
	void setData(TreeNode* _data);
	void setNext(TreeListNode* _next);
	TreeNode* getData();
	TreeListNode* getNext();
	virtual ~TreeListNode();
};

} /* namespace trees */

#endif /* CHILDNODE_HPP_ */

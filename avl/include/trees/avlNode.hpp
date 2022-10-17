/*
 * abbNode.h
 *
 *  Created on: Sep 2, 2022
 *      Author: jsaavedr
 */

#ifndef ABBNODE_HPP_
#define ABBNODE_HPP_

namespace trees {

enum NodeType{
	LEFT = 10,
	RIGHT = 20
};


class AVLNode {
private:
	int data;
	AVLNode* ptrLeft;
	AVLNode* ptrRight;
	AVLNode* parent;
	int hLeft;
	int hRight;
	NodeType type;


public:
	AVLNode();
	AVLNode(int val, AVLNode* _parent = nullptr);
	void setLeft(AVLNode* node);
	void setRight(AVLNode* node);
	void setParent(AVLNode* node);
	void setData(int val);
	void setLeftHeight(int h);
	void setRightHeight(int h);
	void setType(NodeType t);
	bool isLeft();
	bool isRight();
	AVLNode* getLeft();
	AVLNode* getRight();
	AVLNode* getParent();
	int getData();
	int getLeftHeight();
	int getRightHeight();
	int getHeight();
	int getBalanceScore();
	char getType();
	void updateChildrenHeights();
	virtual ~AVLNode();
};

} /* namespace trees */

#endif /* ABBNODE_H_ */

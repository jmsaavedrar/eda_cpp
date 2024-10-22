/*
 * abbNode.h
 *
 *  Created on: Sep 2, 2022
 *      Author: jsaavedr
 */

#ifndef RBNODE_HPP_
#define RBNODE_HPP_

namespace trees {

enum NodeType{
	LEFT = 10,
	RIGHT = 20
};

enum NodeColor{
	RED = 10,
	BLACK = 20
};


class RBNode {
private:
	int data; //key
	RBNode* ptrLeft;
	RBNode* ptrRight;
	RBNode* parent;	
	NodeColor color; // red or black
	NodeType type;


public:
	RBNode();
	RBNode(int val, RBNode* _parent = nullptr);
	void setLeft(RBNode* node);
	void setRight(RBNode* node);
	void setParent(RBNode* node);
	void setData(int val);	
	void setType(NodeType t);
	void setColor(NodeColor t);
	bool isLeft();
	bool isRight();
	RBNode* getLeft();
	RBNode* getRight();
	RBNode* getParent();
	int getData();	
	char getColor();	
	char getType();	
	virtual ~RBNode();
};

} /* namespace trees */

#endif /* RBNODE_H_ */

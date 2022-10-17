/*
 * abb.hpp
 *
 *  Created on: Sep 2, 2022
 *      Author: jsaavedr
 */

#ifndef ABB_HPP_
#define ABB_HPP_

#include "trees/avlNode.hpp"

namespace trees {

enum RotationType{
	LeftRotation = 10,
	RightRotation = 20,
	LeftRightRotation = 30,
	RightLeftRotation = 40
};

class AVL {
private:
	AVLNode* root;
	/*private methods, rotations*/
	void balance(AVLNode* node);
	void leftRotation(AVLNode* node);
	void rightRotation(AVLNode* node);
	void leftRightRotation(AVLNode* node);
	void rightLeftRotation(AVLNode* node);
	RotationType getRotationType(AVLNode* node);
public:
	AVL();
	void insert_rec(int val, AVLNode* node);
	void insert(int val);
	AVLNode* find_rec(int val, AVLNode* node);
	AVLNode* find(int val);
	void traverse_rec(AVLNode* node, int level);
	void traverse();
	virtual ~AVL();
};

} /* namespace trees */

#endif /* ABB_HPP_ */

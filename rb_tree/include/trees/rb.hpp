/*
 * abb.hpp
 *
 *  Created on: Sep 2, 2022
 *      Author: jsaavedr
 */

#ifndef RB_HPP_
#define RB_HPP_

#include "trees/rbNode.hpp"

namespace trees {

enum RotationType{
	case_1 = 10,
	case_2 = 20,
	case_3 = 30,
	case_4 = 40,
	//you can or should add more cases 
};

class RB {
private:
	RBNode* root;
	/*private methods, rotations*/
	void balance(RBNode* node);
	//void do_case_1(RBNode* node);
	//void do_case_2(RBNode* node);
	//....
	RotationType getRotationType(RBNode* node);
public:
	RB();
	void insert(int val, RBNode* node);
	void insert(int val);
	RBNode* find(int val, RBNode* node);
	RBNode* find(int val);
	void traverse(RBNode* node, int level);
	void traverse();
	virtual ~RB();
};

} /* namespace trees */

#endif /* RB_HPP_ */

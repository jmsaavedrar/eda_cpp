/*
 * linkedList.hpp
 *
 */

#ifndef LINKEDLIST_HPP_
#define LINKEDLIST_HPP_

#include "lLists/node.hpp"

namespace eda {

class LinkedList {
private:
	Node* head;

public:
	LinkedList();
	void insertLast(int val);
	void insertFirst(int val);
	void removeFirst();
	void remove(int val);
	void removeAll();
	Node* find(int val);
	void print();
	virtual ~LinkedList();
};

} /* namespace eda */

#endif /* LINKEDLIST_HPP_ */

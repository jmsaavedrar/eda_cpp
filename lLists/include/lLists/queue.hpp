/*
 * queue.hpp
 *
 *  Created on: Aug 18, 2022
 *      Author: jsaavedr
 */

#ifndef QUEUE_HPP_
#define QUEUE_HPP_

#include "lLists/node.hpp"

namespace eda {

class Queue {
private:
	Node* head;
	Node* tail;
public:
	Queue();
	void push(int val);
	void push(Node* node);
	void pop();
	Node* top();
	bool isEmpty();
	void clear();
	virtual ~Queue();
};

} /* namespace eda */

#endif /* QUEUE_HPP_ */

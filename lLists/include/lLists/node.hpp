/*
 * node.hpp
 *
 */

#ifndef NODE_HPP_
#define NODE_HPP_

namespace eda {

class Node {
private:
	int data;
	Node* ptrNext;
public:
	Node();
	Node(int _data, Node* next = nullptr);
	void setData(int _data);
	void setNext(Node* _next);
	int getData();
	Node* getNext();
	void print();
	virtual ~Node();
};

} /* namespace eda */

#endif /* NODE_HPP_ */

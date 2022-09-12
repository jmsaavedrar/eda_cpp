/*
 * node.hpp
 *
 */

#ifndef NODE_HPP_
#define NODE_HPP_

namespace eda {

class Node {
private:
	char data;
	Node* ptrNext;
public:
	Node();
	Node(char _data, Node* next = nullptr);
	void setData(char _data);
	void setNext(Node* _next);
	char getData();
	Node* getNext();
	void print();
	virtual ~Node();
};

} /* namespace eda */

#endif /* NODE_HPP_ */

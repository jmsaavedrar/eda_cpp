#include "lLists/node.hpp"
#include "lLists/linkedList.hpp"
#include <iostream>
using namespace eda;

int main(int nargs, char** vargs){
//	Node nodo1(5);
//	Node* nodo2 = new Node(7);
//	nodo1.setNext(nodo2);
	LinkedList list;
	list.insertFirst(1);
	list.insertFirst(3);
	list.insertFirst(5);
	list.insertFirst(15);
	list.insertFirst(5);
	list.insertFirst(17);
	list.print();
	list.remove(5);
	list.remove(17);
	list.print();
	list.removeAll();
	list.insertLast(2);
	list.insertLast(12);
	list.insertLast(2);
	list.print();
	Node* p = list.find(12);
	p->setData(18);
	std::cout << " after clean " << std::endl;
	list.print();
	return 0;
}

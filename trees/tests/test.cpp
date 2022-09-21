#include <iostream>
#include "trees/tree.hpp"
#include <cstring>

int main(int nargs, char** vargs){
	trees::Tree tree;
	tree.setRoot(new trees::TreeNode(10));
	tree.insert(5,10);
	tree.insert(6,5);
	tree.insert(7,10);
	tree.insert(17,7);
	tree.insert(71,7);
	tree.insert(41,7);
	tree.traverse();
	std::cout<<"Mostrar los hijos de 10" << std::endl;
	trees::TreeNode* node = tree.find(10);
	if (node != nullptr){
		node->getChildren()->print();
	}
	return 0;
}

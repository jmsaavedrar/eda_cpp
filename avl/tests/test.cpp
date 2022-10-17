#include "trees/avl.hpp"
#include <iostream>

int main(int nargas, char** vargs){
	trees::AVL avl;
	avl.insert(16);
	avl.insert(32);
	avl.insert(45);
	avl.insert(8);
	avl.insert(10);
	avl.insert(15);

	avl.traverse();
	return 0;
}

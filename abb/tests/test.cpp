#include "trees/abb.hpp"
#include <iostream>

int main(int nargas, char** vargs){
	trees::ABB abb;
	abb.insert(16);
	abb.insert(4);
	abb.insert(2);
	abb.insert(20);
	abb.insert(15);
	abb.insert(18);
	abb.insert(35);
	abb.insert(50);
	//abb.showASC();
	abb.updateSize();
	abb.traverse();

	trees::ABBNode* node = nullptr;
	for (int k = 1; k<= 8; k++ ){
		node = abb.k_element(k);
		if (node != nullptr){
			std::cout << "k = " <<k << " --> "<< node->getData() << std::endl;
		}
	}

	return 0;
}

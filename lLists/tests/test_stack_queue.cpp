#include "lLists/queue.hpp"
#include "lLists/stack.hpp"
#include <iostream>
using namespace eda;

int main(int nargs, char** vargs){
	Stack stack;
	stack.push(0);
	stack.push(10);
	stack.push(20);
	stack.push(30);

//	while(!stack->isEmpty()){
//		std::cout<<stack->top()->getData()<<" "<<std::endl;
//		stack->pop();
//	}

	return 0;
}

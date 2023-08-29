#include <iostream>

void f3() {
	int x = 1;
	std::cout << "dir f3-x " << &x << std::endl;
}
void f2() {
	f3();
	int x = 1;
	std::cout << "dir f2-x " << &x << std::endl;
}
void f1(){
	f2();
	int x = 1;
	std::cout << "dir f1-x " << &x << std::endl;

}

int main(int nargs, char** vargs) {

	f1();
	return 0;
}

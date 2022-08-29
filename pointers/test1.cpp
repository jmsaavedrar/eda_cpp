#include <iostream>

int sumar(int x, int y){
	std::cout<<&x<<std::endl;
	int z = x + y;
	return z;
}

int main(int nargs, char** vargs){
	int a = 5;
	int b = 6;
	int x  = sumar(a,b);
	std::cout<<&x<<std::endl;
	std::cout << x << std::endl;

	return 0;
}

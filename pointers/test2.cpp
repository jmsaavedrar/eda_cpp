#include <iostream>

void createArray(int*& a, int n){
	a = new int[n];
}


int main(int nargs, char** vargs){

	int* array = nullptr;
	int n = 10;
	createArray(array, n);
	for(int i = 0; i < n; i++){
		array[i] = 0;
	}
	for(int i = 0; i < n; i++){
			std::cout<< array[i] << std::endl;
	}
	delete[] array;
	return 0;
}

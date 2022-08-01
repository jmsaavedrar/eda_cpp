#include "sort/sort.hpp"
#include "sort/utils.hpp"
#include <chrono>
#include <iostream>
#include <ctime>

long getElapsedTime(std::chrono::time_point<std::chrono::high_resolution_clock> t1,
		std::chrono::time_point<std::chrono::high_resolution_clock> t2){
	auto int_ms = std::chrono::duration_cast<std::chrono::milliseconds>(t2 - t1);
	return static_cast<long>(int_ms.count());
}

int main(int nargs, char** args){

	std::srand(std::time(nullptr));
	int n = 10000;
	float* A = sort::createRandomIntArray(n, 0, 100);
	auto start = std::chrono::high_resolution_clock::now();
	sort::quickSort(A, n);
	//sort::printArray(A, n);
	sort::deleteArray(A);
	auto end = std::chrono::high_resolution_clock::now();
	std::cout<<" Elapsed : " << getElapsedTime(start, end) << std::endl;
	return 0;
}

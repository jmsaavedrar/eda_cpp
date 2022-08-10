#include "misc/misc.hpp"
#include <iostream>

int main(int nargs, char** vargs){
//	int n = 7;
//	if (misc::isPrime(n)) {
//		std::cout<< n << " es primo. " << std::endl;
//	}
//	else
//	{
//		std::cout<< n << " NO es primo." << std::endl;
//	}
// MSS
	int A[]={-2, 11, -1, 3, -3, -2};
	int i =0;
	int j = 0;
	int mss = 0;
	int n = 6;
	misc::printArray(A, n);
	misc::getMSS(A, n, &i, &j, &mss);
	std::cout<<" MSS(n2) i: " << i << " j: " << j << " val: "<<mss<<std::endl;
	misc::getMSS_v2(A, n, &i, &j, &mss);
	std::cout<<" MSS(n2) i: " << i << " j: " << j << " val: "<<mss<<std::endl;
	misc::getMSS_v3(A, n, &i, &j, &mss);
	std::cout<<" MSS(n) i: " << i << " j: " << j << " val: "<<mss<<std::endl;
	return 0;

}




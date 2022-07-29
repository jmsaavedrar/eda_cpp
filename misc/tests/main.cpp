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

//	MSS
	int A[]={-2, 11, -1, 3, -3, 2};
	int i =0;
	int j = 0;
	int mss = 0;
	misc::getMSS(A, 6, &i, &j, &mss);
	std::cout<<" MSS i: " << i << " j: " << j << " val: "<<mss<<std::endl;
	return 0;

}




#include <cmath>
#include <misc/misc.hpp>
#include <iostream>
namespace misc{

	bool isPrime(int n){
		bool ans = true;
		for (int i = 2; i <= static_cast<int>(std::sqrt(n) + 0.5); i++){
			if (n % i == 0){
				ans = false;
			}
		}
		return ans;
	}

	void printArray(int* A, int n){
		for (int i = 0; i < n; i++){
			std::cout<<A[i]<< " ";
		}
		std::cout<<std::endl;
	}

	void getMSS(int* A, int n, int *imss_out, int* jmss_out, int* mss_out){
		int mss = -1;
		int imss = 0;
		int jmss = 0;
		int thisSum = 0;
		for(int i = 0; i < n; i++){
			for(int j = 0; j < n; j++){
				thisSum = 0;
				for (int k = i; k <=  j; k++){
					thisSum += A[k];
				}
				if (thisSum > mss){
					mss = thisSum;
					imss = i;
					jmss = j;
				}
			}
		}
		*imss_out = imss;
		*jmss_out = jmss;
		*mss_out = mss;
	}

	void getMSS_v2(int* A, int n, int *imss_out, int* jmss_out, int* mss_out){
		int mss = -1;
		int imss = 0;
		int jmss = 0;
		int thisSum = 0;
		for(int i = 0; i < n; i++){
			thisSum = A[i];
			if (thisSum > mss){
				mss = thisSum;
				imss = i;
				jmss = i;
			}
			for(int j = i+1; j < n; j++){
				thisSum += A[j];
				if (thisSum > mss){
					mss = thisSum;
					imss = i;
					jmss = j;
				}
			}
		}
		*imss_out = imss;
		*jmss_out = jmss;
		*mss_out = mss;
	}

	void getMSS_v3(int* A, int n, int *imss_out, int* jmss_out, int* mss_out){
			int mss = -1;
			int imss = 0;
			int jmss = 0;
			int thisSum = 0;
			int start_i = 0;
			for (int i = start_i; i < n ; i++){
				thisSum += A[i];
				if (thisSum > mss){
					mss = thisSum;
					jmss = i;
					imss = start_i;
				}
				if (thisSum < 0) {
					start_i = i + 1;
					thisSum = 0;
				}
			}
			*imss_out = imss;
			*jmss_out = jmss;
			*mss_out = mss;
		}


}



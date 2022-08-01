#include <cmath>
#include <misc/misc.hpp>
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
}



#ifndef MISC_HPP
#define MISC_HPP

namespace misc{
	bool isPrime(int n);
	void printArray(int* A, int n);
	void getMSS(int* A, int n, int *imss_out, int* jmss_out, int* mss_out);
	void getMSS_v2(int* A, int n, int *imss_out, int* jmss_out, int* mss_out);
	void getMSS_v3(int* A, int n, int *imss_out, int* jmss_out, int* mss_out);
}

#endif

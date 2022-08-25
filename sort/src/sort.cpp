#include <iostream>
#include "sort/sort.hpp"
#include "sort/utils.hpp"

namespace sort{

	void selectionSort(float* A, int n){
		int smallest = 0;
		int i = 0;
		int j = 0;
		for (i = 0; i < n - 1; i++){
			smallest = i;
			for (j = i + 1; j < n; j++){
				if (A[j] < A[smallest]){
					smallest = j;
				}
			}
			swap(A,i,smallest);
		}
	}

	int split_qs(float* A, int i, int j){
		/***
		 * split for quicksort
		 * i,j are the endpoints
		 */
		int p = getRandomInt(i, j);

		while (i  < j) {

			while ( i < p && A[i] <= A[p]){
				i = i + 1;
			}

			while ( j > p && A[j] >= A[p]){
				j = j - 1;
			}

			swap(A, i, j);

			if (i == p){
				p = j;
			}
			else if (j == p){
				p = i;
			}
		}
		return p;
	}

	void quickSort(float* A, int i, int j){
		if (i < j){
			int k = split_qs(A, i, j);
			quickSort(A, i, k-1);
			quickSort(A, k + 1, j);
		}
	}

	void quickSort(float* A, int n){
		quickSort(A, 0, n - 1);
	}

	int  k_smallest(float* A, int i, int j, int k){
		int p = split_qs(A, i, j);
		int val = 0;
		if (k == p){
			val = A[p];
		}
		else if (k < p){
			val = k_smallest(A, i, p-1, k);
		}
		else{
			val = k_smallest(A, p+1, j, k);
		}
		return val;
	}

	int  k_smallest(float* A, int n, int k){
		return k_smallest(A, 0, n-1, k);
	}

}




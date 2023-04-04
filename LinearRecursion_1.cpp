//nguon: https://codelearn.io/learning/data-structure-and-algorithms/819552

#include <stdio.h>

int LinearSearch(int a[], int n, int x){
	for(int i=0; i<n; i++){
		if(a[i] == x){
			return i;
		}
	}
	return -1;
}

#include <stdio.h>

void swap(int &a, int &b){
	int x = a;
	a = b;
	b = x;
}

void InterchangeSort(int a[], int n){
	for(int i = 0; i < n-1; i++)
	{
		for(int j = i+1; j < n; j++)
		{
			if(a[i] > a[j])
			{
				swap(a[i], a[j]);
			}	
		}
	}
}

int main()
{
    int arr[] = {3,4,6,7,1,2};
    int n = sizeof(arr)/sizeof(arr[0]);
    interchangesort(arr, n);
    printf("Sorted array: \n");
    xuat(arr, n);
    return 0;
}

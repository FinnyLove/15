void swap(int &a, int &b){
	int x = a;
	a = b;
	b = x;
}

void SelectionSort(int a[], int n){
	int i, j, min;
	for(i=0; i<n-1; i++){
		min = i;
		for(j=i+1; j<n; j++){
			if(a[j] < a[min]){
				swap(j, min);
			}
		}
	}
}

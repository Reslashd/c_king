/*
 * C Programming - A Modern Approach 2nd Edition
 * Chapter 9 Excercises by Reslashd (c)2025
 * 
 */
 
#include <stdio.h>

void selection_sort(int a[], int n, int i, int last);

int main(void){	
	int n = 5;
	int a[n];

	for (int i = 0 ; i < n ; i++){
		a[i] = 0;
	}		
	printf("Please enter %d integers to be sorted: ", n);
	for(int i = 0 ; i < n ; i++){
		scanf("%d", &a[i]);
	}
	selection_sort(a, n, 0, (n - 1)); //i = a[0] last = a[n - 1]
	printf("\nSorted integers: ");
	for (int i = 0 ; i < n ; i++){
		printf("%d ", a[i]);
	}
	return 0;
}

void selection_sort(int a[], int n, int i, int last){
	if(i == last){
		return;
	} else{		
		for (int j = (i + 1) ; j <= last ; j++){
			if(a[j] < a[i]){
				int temp = a[i];
				a[i] = a[j];
				a[j] = temp;
			}
		}
		i++;
		selection_sort(a, n, i, last);
	}
}

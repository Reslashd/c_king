/*
 * C Programming - A Modern Approach 2nd Edition
 * Chapter 11 Excercises by Reslashd (c)2025
 * 
 */
 
#include <stdio.h>
#include <stdlib.h>

int *find_largest(int a[], int n);
int main(void){
	int n = 5;
	int a[n];
	int *largest;
	a[0] = 3;
	a[1] = 25;
	a[2] = 19;
	a[3] = 74;
	a[4] = 8;
	largest = find_largest(a, n);
	printf("The largest element = %d\n", *largest);
	
	return EXIT_SUCCESS;
}

int *find_largest(int a[], int n){
	int *p;
	p = &a[0];
	for(int i = 0 ; i < n ; i++){
		if(*p < a[i]){
			p = &a[i];
		}
	}
	return p;
}

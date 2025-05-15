/*
 * C Programming - A Modern Approach 2nd Edition
 * Chapter 9 Excercises by Reslashd (c)2025
 * 
 */
 
#include <stdio.h>
#include <stdbool.h>

bool has_zero(int a[], int n);

int main(void){	
	int n = 3;
	int a[n];
	a[0] = 1;
	a[1] = 2;
	a[2] = 3;
	
	printf("%d", has_zero(a, n));
	return 0;
}

bool has_zero(int a[], int n){
	int i;
	bool result = 0;
	
	for (i = 0; i < n ; i++){
		if (a[i] == 0){
			result = 1;
		}
	}
	return result;
}


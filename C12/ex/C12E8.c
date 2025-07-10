/*
 * C Programming - A Modern Approach 2nd Edition
 * Chapter 12 Excercises by Reslashd (c)2025
 * 
 */
 
#include <stdio.h>
#include <stdlib.h>

void store_zeros(int a[], int n);
int main(void){
	int n = 4;
	int a[n];	
	
	store_zeros(a, n);
	
	return EXIT_SUCCESS;		
}

void store_zeros(int a[], int n){
	int *p;
	for(p = a ; p < (a + n) ; p++){
		*p = 0;		
	}
}



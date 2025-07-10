/*
 * C Programming - A Modern Approach 2nd Edition
 * Chapter 12 Excercises by Reslashd (c)2025
 * 
 */
 
#include <stdio.h>
#include <stdlib.h>

int *find_middle(int a[], int n);

int main(void){
	int n = 5;
	int num = 1;
	int a[n];
	int *p;
	
	for(p = a ; p < (a + n) ; p++){
		*p = num;
		num++; 
	}
	
	for(p = a ; p < (a + n) ; p++){
		printf("%d ", *p);
	}
	
	printf("Middle = %d", *find_middle(a, n));
	return EXIT_SUCCESS;		
}

int *find_middle(int a[], int n){
	int *p = a;
	return p + (n/2);
}


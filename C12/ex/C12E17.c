/*
 * C Programming - A Modern Approach 2nd Edition
 * Chapter 12 Excercises by Reslashd (c)2025
 * 
 */
 
#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

#define LEN 4

int sum_two_dimensional_array(const int a[][LEN], int n);


int main(void){
	int n = 2;
	int a[n][LEN];
	int num = 1;
	int *p;
	
	for (p = &a[0][0]; p <= &a[n-1][LEN-1] ; p++){
		*p = num + 1;
		num++;
	}	
		
	printf("Sum = %d\n", sum_two_dimensional_array((const int (*)[LEN])a, n));

	return EXIT_SUCCESS;		
}

int sum_two_dimensional_array(const int a[][LEN], int n){
	int sum = 0;
	const int *p;
	for (p = &a[0][0]; p <= &a[n-1][LEN-1] ; p++){
		printf("%d ", *p);
		sum += *p;
	}	
	return sum;
}

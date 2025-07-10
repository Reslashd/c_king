/*
 * C Programming - A Modern Approach 2nd Edition
 * Chapter 12 Excercises by Reslashd (c)2025
 * 
 */
 
#include <stdio.h>
#include <stdlib.h>

#define N 4

int sum_array(int *a, int n);

int main(void){
	int a[N] = { 1, 2, 3, 4 };
	int n = N;
	printf("Sum is %d\n", sum_array(a, n));
	return EXIT_SUCCESS;
}

int sum_array(int *a, int n){
	int sum;
	sum = 0;
	int *p;
	for (p = a; p < (a + n) ; p++){
		sum += *p;
	}
	return sum;
}

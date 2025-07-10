/*
 * C Programming - A Modern Approach 2nd Edition
 * Chapter 12 Excercises by Reslashd (c)2025
 * 
 */
 
#include <stdio.h>
#include <stdlib.h>

#define N 10

int main(void){

	int a[N] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
	int *p = &a[0], *q = &a[N-1], temp;
	
	while (p < q) {
		temp = *p;
		*p++ = *q;
		*q-- = temp;
	}
	
	for (int i = 0 ; i < N ; i++){
		printf("%d ", a[i]);
	}
	return EXIT_SUCCESS;
}


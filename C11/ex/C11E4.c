/*
 * C Programming - A Modern Approach 2nd Edition
 * Chapter 11 Excercises by Reslashd (c)2025
 * 
 */
 
#include <stdio.h>
#include <stdlib.h>

void swap(int *p, int *q);

int main(void){
	int i = 1;
	int j = 3;
	printf("Before swap i = %d, j = %d\n", i, j);
	swap(&i, &j);
	printf("After swap i = %d, j = %d\n", i, j);
	return EXIT_SUCCESS;
}

void swap(int *p, int *q){
	int temp = 0;
	temp = *p;
	*p = *q;
	*q = temp;
}

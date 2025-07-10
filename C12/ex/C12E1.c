/*
 * C Programming - A Modern Approach 2nd Edition
 * Chapter 12 Excercises by Reslashd (c)2025
 * 
 */
 
#include <stdio.h>
#include <stdlib.h>


int main(void){

	int a[] = {5, 15, 34, 54, 14, 2, 52, 72};
	int *p = &a[1], *q = &a[5];
	
	printf("%d\n", *(p+3));
	printf("%d\n", *(q-3));
	printf("%ld\n", (q - p));
	printf("%d\n", p < q);
	printf("%d\n", *p < *q);
	return EXIT_SUCCESS;
}

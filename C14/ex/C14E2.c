/*
 * C Programming - A Modern Approach 2nd Edition
 * Chapter 14 Excercises by Reslashd (c)2025
 * 
 */
 
#include <stdio.h>
#include <stdlib.h>

#define NELEMS(a) ((sizeof(a))/((sizeof(a[0]))))


int main(void){	
	int a[10] = { 0 };
	
	printf("x = %ld\n", NELEMS(a));
	
	return EXIT_SUCCESS;	
}


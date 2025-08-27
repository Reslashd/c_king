/*
 * C Programming - A Modern Approach 2nd Edition
 * Chapter 14 Excercises by Reslashd (c)2025
 * 
 */
 
#include <stdio.h>
#include <stdlib.h>

#define DOUBLE(x) 2*x
//3c
#define DOUBLE_FIXED(x) ((2)*(x))

int main(void){	
	printf("a: %d\n", DOUBLE(1+2)); // expected 6 but probably 4
	printf("b: %d\n", 4/DOUBLE(2)); // expected 1 but gives 4? --> 2*1 = 2 * 2 = 4
	
	printf("FIXED a: %d\n", DOUBLE_FIXED(1+2)); 
	printf("FIXED b: %d\n", 4/DOUBLE_FIXED(2)); 
	
	return EXIT_SUCCESS;	
}


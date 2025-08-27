/*
 * C Programming - A Modern Approach 2nd Edition
 * Chapter 14 Excercises by Reslashd (c)2025
 * 
 */
 
#include <stdio.h>
#include <stdlib.h>

#define ERROR(text, i) fprintf(stderr, text, i)

int main(void){	
	int index = 10;
	ERROR("Range error: index = %d\n", index);

	return EXIT_SUCCESS;	
}


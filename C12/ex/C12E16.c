/*
 * C Programming - A Modern Approach 2nd Edition
 * Chapter 12 Excercises by Reslashd (c)2025
 * 
 */
 
#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

int find_largest(int temperatures[][24]);


int main(void){
	int temperatures[7][24] = { 0 };
	
	temperatures[1][10] = 15;
	temperatures[4][22] = 32;
	
	printf("Largest = %d\n", find_largest(temperatures));

	return EXIT_SUCCESS;		
}

int find_largest(int temperatures[][24]){
	int max;
	max = temperatures[0][0];
	int *p;

	for(p = &temperatures[0][0] ; p <= &temperatures[7-1][24-1] ; p++){		
		if(*p > max){
			max = *p;
		}		
	}
	return max;
}

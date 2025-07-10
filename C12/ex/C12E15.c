/*
 * C Programming - A Modern Approach 2nd Edition
 * Chapter 12 Excercises by Reslashd (c)2025
 * 
 */
 
#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

void printReadings(int temperatures[][24]);

int main(void){
	int temperatures[7][24] = { 0 };
	
	temperatures[1][10] = 15;
	temperatures[4][22] = 32;
	
	printReadings(temperatures);

	return EXIT_SUCCESS;		
}

void printReadings(int temperatures[][24]){
	int *p;
	for(p = temperatures[1] ; p <= temperatures[1] + (24-1) ; p++){		
		printf("%d ", *p);
	}		
}

/*
 * C Programming - A Modern Approach 2nd Edition
 * Chapter 14 Excercises by Reslashd (c)2025
 * 
 */
 
#include <stdio.h>
#include <stdlib.h>

#define CHECK(x,y,n) ((x > 0) ? ((x < (n - 1)) ? ((y > 0) ? ((y < (n - 1)) ? 1 : 0) : 0) : 0) : 0)
#define MEDIAN(x,y,z) (((x > y && x < z) || (x < y && x > z)) ? x : ((y > x && y < z) || (y < x && y > z)) ? y : z)
#define POLYNOMIAL(x) //Skipping for now, hurts my brain

int main(void){	
	printf("%d\n", CHECK(2,4,10));
	printf("%d\n", MEDIAN(5,3,10));
	
	return EXIT_SUCCESS;	
}


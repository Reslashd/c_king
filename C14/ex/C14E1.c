/*
 * C Programming - A Modern Approach 2nd Edition
 * Chapter 14 Excercises by Reslashd (c)2025
 * 
 */
 
#include <stdio.h>
#include <stdlib.h>

#define CUBE(x) ((x * x))
#define REM(n) ((n % 4))
#define SUBHUNDRED(x, y) (((x) * (y)) < (100)?((x) = 1) : ((x) = 0))

int main(void){	
	double x = 10;
	double y = 9.99;
	int n = 17;
	
	printf("x = %lf\n", CUBE(x));
	printf("n = %d\n", REM(n));
	printf("x = %.0lf\n", SUBHUNDRED(x, y));
	
	return EXIT_SUCCESS;
	
}

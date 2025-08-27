/*
 * C Programming - A Modern Approach 2nd Edition
 * Chapter 14 Excercises by Reslashd (c)2025
 * 
 */
 
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#define DISP(f, x) printf("sqrt(%.1lf) = %.2lf\n", x, f(x))
#define DISP2(f, x, y) printf("pow(%.1lf,%.1lf) = %.2lf\n", x, y, f(x,y))

int main(void){	
	DISP(sqrt, 3.0);
	DISP2(pow, 4.0, 3.0);
	
	return EXIT_SUCCESS;	
}


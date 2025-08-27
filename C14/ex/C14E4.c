/*
 * C Programming - A Modern Approach 2nd Edition
 * Chapter 14 Excercises by Reslashd (c)2025
 * 
 */
 
#include <stdio.h>
#include <stdlib.h>

//#define AVG(x,y) (x+y)/2.0
//#define AREA(x,y) (x)*(y)

#define AVG(x,y) (((x)+(y))/2.0)
#define AREA(x,y) ((x)*(y))

int main(void){	
	printf("a: %lf\n", AVG(9,2)); //problem when dividing uneven numbers (averaged down)?
	printf("b: %lf\n", AREA(9.5,2)); //problem when dividing uneven numbers (averaged down)?
	

	return EXIT_SUCCESS;	
}


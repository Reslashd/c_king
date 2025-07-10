/*
 * C Programming - A Modern Approach 2nd Edition
 * Chapter 12 Excercises by Reslashd (c)2025
 * 
 */
 
#include <stdio.h>
#include <stdlib.h>

double inner_product(const double *a, const double *b, int n);

int main(void){
	int n = 1;
	double a[n];
	double b[n];
	double *p;
	double value = 2.0;
	
	for(p = a ; p < (a + n) ; p++){
		*p = value + 2.0;	
	}
	
	for(p = b ; p < (b + n) ; p++){
		*p = value + 1.0;		
	}

	printf("Product = %lf\n", inner_product(a, b, n));
	return EXIT_SUCCESS;		
}

double inner_product(const double *a, const double *b, int n){
	double product = 0.0;
	const double *pA;
	const double *pB;
	pB = b;
	
	for(pA = a ; pA < (a + n) ; pA++){
		product = product + (*pA * *pB);
	}
	
	return product;	
}


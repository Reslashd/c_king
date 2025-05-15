/*
 * C Programming - A Modern Approach 2nd Edition
 * Chapter 9 Excercises by Reslashd (c)2025
 * 
 */
 
#include <stdio.h>
#include <stdlib.h>

float computePolynomial(float value); 

int main(void){
	float x = 0;
	float value = 0;

	printf("Enter a value for x: ");
	
	while((scanf("%f", &x)) == 0){
		scanf("%*[^\n]");
		printf("Enter a value for x: ");
	}	
	value = computePolynomial(x);
	printf("The value of the polynomial = %.0f\n", value);
	return EXIT_SUCCESS;
}


float computePolynomial(float x){
	// not sure what a Polynomial is and what is expected...
	float value = 0.0;
	value = (3 * (x * x * x * x * x));
	value = (value + (2 * (x * x * x * x)));
	value = (value - (5 * (x * x * x)));
	value = (value - (x * x));
	value = (value + (7 * x));
	value = (value - 6);
	return value;
}



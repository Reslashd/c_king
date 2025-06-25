/*
 * C Programming - A Modern Approach 2nd Edition
 * Chapter 11 Excercises by Reslashd (c)2025
 * 
 */
 
#include <stdio.h>
#include <stdlib.h>

void reduce(int numerator, int denominator, int *reduced_numerator, int *reduced_denominator);

int main(void){
	int numerator = 0;
	int denominator = 0;
	int reduced_numerator = 0;
	int reduced_denominator = 0;
	
	printf("Enter a fraction: ");
	scanf("%d/%d", &numerator, &denominator);
	reduce(numerator, denominator, &reduced_numerator, &reduced_denominator);
	printf("In lowest terms: %d/%d\n", reduced_numerator, reduced_denominator); 

	return EXIT_SUCCESS;
}

void reduce(int numerator, int denominator, int *reduced_numerator, int *reduced_denominator){
	int m_bak = numerator;
	int n_bak = denominator;
	int remainder = 0;

	while(denominator != 0){
		remainder = numerator % denominator;
		numerator = denominator;
		denominator = remainder;
	}	
	*reduced_numerator = (m_bak/numerator);
	*reduced_denominator = (n_bak/numerator);
}

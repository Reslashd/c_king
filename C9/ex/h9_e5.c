/*
 * C Programming - A Modern Approach 2nd Edition
 * Chapter 9 Excercises by Reslashd (c)2025
 * 
 */
 
#include <stdio.h>

int num_digits(int n);

int main(void){	
	int n_digits = 0;
	n_digits = num_digits(5331);
	printf("Number of digits = %d\n", n_digits);
	return 0;
}

int num_digits(int n){
	int n_divisions = 0;
	while(n != 0){
		n = n / 10;
		n_divisions++;
	}
	return n_divisions;
}

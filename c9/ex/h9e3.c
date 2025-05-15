/*
 * C Programming - A Modern Approach 2nd Edition
 * Chapter 9 Excercises by Reslashd (c)2025
 * 
 */
 
#include <stdio.h>

int gcd(int m, int n);

int main(void){	
	int divisor = 0;
	divisor = gcd(12, 28);	
	printf("Greatest common divisor: %d\n", divisor);	
	return 0;
}

int gcd(int m, int n){	
	int remainder = 0;
	
	while(n != 0){
		remainder = m % n;
		m = n;
		n = remainder;
	}		
	return m;
}


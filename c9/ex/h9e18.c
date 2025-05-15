/*
 * C Programming - A Modern Approach 2nd Edition
 * Chapter 9 Excercises by Reslashd (c)2025
 * 
 */
 
#include <stdio.h>

int gcd(int m, int n);

int main(void){	
	int divisor = 0;
	divisor = gcd(12, 28);	// uitkomst = 4.
	printf("Greatest common divisor: %d\n", divisor);	
	return 0;
}

int gcd(int m, int n){	
	if(n != 0){
		m = gcd(n, (m % n));
	}
	return m;
}


/*
 * C Programming - A Modern Approach 2nd Edition
 * Chapter 6 Excercises by Reslashd (c)2024
 * 
 */
 
#include <stdio.h>

int main(void){
	int m = 0;
	int n = 0;
	int remainder = 0;
	
	printf("Enter first two integers: ");
	scanf("%d %d", &m, &n);

	while(n != 0){
		remainder = m % n;
		m = n;
		n = remainder;
	}	
	printf("Greatest common divisor: %d\n", m);

	
	return 0;
}

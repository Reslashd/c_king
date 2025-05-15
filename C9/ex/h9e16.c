/*
 * C Programming - A Modern Approach 2nd Edition
 * Chapter 9 Excercises by Reslashd (c)2025
 * 
 */
 
#include <stdio.h>

int fact(int n);

int main(void){	
	int i = 0;
	i = fact(3);
	
	printf("Fact = %d\n", i);
	return 0;
}

// p 204...
int fact(int n){
	return n == 0 ? 1 : n * fact(n - 1);
}



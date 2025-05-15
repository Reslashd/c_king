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
	
	printf("Factorial = %d\n", i);
	return 0;
}

int fact(int n){
	int result = (n * (n - 1));
		n--;	
	for (int j = n ; j != 1 ; j--){
		result = result * (n - 1);
		n--;
	}
	return result;
}



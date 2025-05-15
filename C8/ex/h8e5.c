/*
 * C Programming - A Modern Approach 2nd Edition
 * Chapter 8 Excercises by Reslashd (c)2025
 * 
 */
 
#include <stdio.h>
#include <stdbool.h>

#define  array_size 40

int main(void){

	int fib_numbers[array_size] = {[0] = 0, [1] = 1 };
	
	for(int i = 2; i < array_size ; i++) {
		fib_numbers[i] = fib_numbers[i-2] + fib_numbers[i-1];
	}
	
	for(int i = 0; i < array_size ; i++) {
		printf("%d ", fib_numbers[i]);
	}
	
	return 0;
}

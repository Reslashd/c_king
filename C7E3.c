/*
 * C Programming - A Modern Approach 2nd Edition
 * Chapter 7 Excercises by Reslashd (c)2024
 * 
 */
 
#include <stdio.h>

int main(void){

	long n = 0;
	long sum = 0;
	
	printf("This program sums a series of doubles.\n");
	printf("Enter doubles (0 to terminate): ");
	
	scanf("%ld", &n);
	while(n != 0){
		sum += n;
		scanf("%ld", &n);
	}
	printf("The sum is: %ld\n", sum);
	
	return 0;
}

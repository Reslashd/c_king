/*
 * C Programming - A Modern Approach 2nd Edition
 * Chapter 7 Excercises by Reslashd (c)2024
 * 
 */
 
#include <stdio.h>

int main(void){

	double n = 0;
	double sum = 0;
	
	printf("This program sums a series of doubles.\n");
	printf("Enter doubles (0 to terminate): ");
	
	scanf("%lf", &n);
	while(n != 0){
		sum += n;
		scanf("%lf", &n);
	}
	printf("The sum is: %lf\n", sum);
	
	return 0;
}

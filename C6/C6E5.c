/*
 * C Programming - A Modern Approach 2nd Edition
 * Chapter 6 Excercises by Reslashd (c)2024
 * 
 */
 

#include <stdio.h>

int main(void){
		
	int num = 0;
	int last_digit = 0;
	int reverse = 0;

	printf("Enter a number: ");
	scanf("%d", &num);
	 
	do{
		last_digit = num % 10;
		reverse = (reverse * 10) + last_digit;
		num = num / 10;
		
	} while (num > 0);
	printf("The reverse is: %d", reverse);
	return 0;
}

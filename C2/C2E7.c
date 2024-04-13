/*
 * C Programming - A Modern Approach 2nd Edition
 * Chapter 2 Excercises by Reslashd (c)2024
 * 
 */
 
#include <stdio.h>

int main(void){
	int amount = 0;
	int twenties = 0;
	int tens = 0;
	int fives = 0;
	int ones = 0;
	
	printf("Enter a dollar amount: ");
	scanf("%d", &amount);
	twenties = amount / 20;
	printf("$20 bills: %d\n", twenties);
	tens = (amount - (twenties * 20)) / 10;
	printf("$10 bills: %d\n", tens);
	fives = (amount - (twenties * 20) - (tens * 10)) / 5; 
	printf("$5 bills: %d\n", fives);
	ones = (amount - (twenties * 20) - (tens * 10) - (fives * 5));
	printf("$1 bills: %d\n", ones);
	
	return 0;
}

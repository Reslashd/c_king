/*
 * C Programming - A Modern Approach 2nd Edition
 * Chapter 11 Excercises by Reslashd (c)2025
 * 
 */
 
#include <stdio.h>
#include <stdlib.h>

void pay_amount(int dollars, int *twenties, int *tens, int *fives, int *ones);

int main(void){
	int dollars = 0;
	int twenties = 0;
	int tens = 0;
	int fives = 0;
	int ones = 0;
	
	printf("Enter a dollar amount: ");
	scanf("%d", &dollars);
	pay_amount(dollars, &twenties, &tens, &fives, &ones);
	printf("$20 bills: %d\n", twenties);
	printf("$10 bills: %d\n", tens);
	printf("$5 bills: %d\n", fives);
	printf("$1 bills: %d\n", ones);
	return EXIT_SUCCESS;
}

void pay_amount(int dollars, int *twenties, int *tens, int *fives, int *ones){
	*twenties = dollars / 20;
	*tens = (dollars - (*twenties * 20)) / 10;
	*fives = (dollars - (*twenties * 20) - (*tens * 10)) / 5; 	
	*ones = (dollars - (*twenties * 20) - (*tens * 10) - (*fives * 5));
}

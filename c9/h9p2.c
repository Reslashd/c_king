/*
 * C Programming - A Modern Approach 2nd Edition
 * Chapter 9 Excercises by Reslashd (c)2025
 * 
 */

#include <stdio.h>
#include <stdbool.h>

float calcTax(float income);

int main(void){
	float income = 0.0f;
	printf("Enter taxable income: ");
	scanf("%f", &income);
	printf("Tax due: $%.2f", calcTax(income));
	printf("\n");
	return 0;
}

float calcTax(float income){
	if(income <= 750.00f){
		income = (income * 0.01f);
	} else if (income > 750.00f && income <= 2250.00f){
		income = (7.50f + (income - 750) * 0.02f);
	} else if (income > 2250.00f && income <= 3750.00f){
		income = (37.50f + (income - 2250) * 0.03f);
	} else if (income > 3750.00f && income <= 5250.00f){
		income = (82.50f + (income - 3750) * 0.04f);
	} else if (income > 5250.00f && income <= 7000.00f){
		income = (142.50f + (income - 5250) * 0.05f);
	} else {
		income = (230.00f + (income - 7000) * 0.06f);
	}	
	return income;	
}

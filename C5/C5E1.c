/*
 * C Programming - A Modern Approach 2nd Edition
 * Chapter 5 Excercises by Reslashd (c)2024
 * 
 */
 
#include <stdio.h>
#include <stdbool.h>

int main(void){
	int num = 0;
	int digits = 0;
	printf("Enter a number: ");
	scanf("%d", &num);
	
	if(num >= 0 && num <= 9){
		digits = 1;
	} else if(num >= 10 && num <= 99){
		digits = 2;
	} else {
		digits = 3;
	}
	
	printf("The number %d has %d ", num, digits);
	if(num < 10){
		printf("digit");
	} else
		printf("digits");
	}
}

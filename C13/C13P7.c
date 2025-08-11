/*
 * C Programming - A Modern Approach 2nd Edition
 * Chapter 13 Excercises by Reslashd (c)2025
 * 
 */
 
#include <stdio.h>
#include <stdlib.h>

int main(void){
	int num = 0;
	const char *ones[] = {"one", "two", "three", "four", "five", "six", "seven", "eight", "nine"};
	const char *tens[] = {"ten", "twenty", "thirty", "forty", "fifty", "sixty", "seventy", "eighty", "ninety"};
	const char *teens[] = {"eleven", "twelve", "thirteen", "fourteen", "fifteen", "sixteen", "seventeen", "eighteen", "nineteen"};
	
	printf("Enter a two-digit number: ");
	scanf("%d", &num);
	
	printf("You entered the number ");
	if(num > 19 && (num % 10) != 0){
		printf("%s-", tens[(num / 10) - 1]);
		printf("%s", ones[(num % 10) - 1]);
	} else if(num > 10 && num < 20){
		printf("%s", teens[(num - 10) - 1]);
	} else if(num < 10){
		printf("%s", ones[(num - 1)]);
		} else{
		printf("%s", tens[(num / 10) - 1]);
	}	
	printf("\n");	
	
	return EXIT_SUCCESS;
}




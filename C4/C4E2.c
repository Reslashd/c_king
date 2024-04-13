/*
 * C Programming - A Modern Approach 2nd Edition
 * Chapter 4 Excercises by Reslashd (c)2024
 * 
 */
 
#include <stdio.h>

int main(void){
	int num = 0;
	int first = 0;
	int second = 0;
	int third = 0;

	printf("Enter a three-digit number: ");
	scanf("%d", &num);
	first = num %  10;
	second = (num % 100) / 10;
	third = num / 100;
	printf("The reversal is: %d%d%d\n", first, second, third);
	
	return 0;
}

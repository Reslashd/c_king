/*
 * C Programming - A Modern Approach 2nd Edition
 * Chapter 5 Excercises by Reslashd (c)2024
 * 
 */
 
#include <stdio.h>
#include <stdbool.h>

int main(void){
	int digit = 0;
	
	printf("Enter a numerical grade: ");
	scanf("%d", &digit);
	
	if(digit < 0 || digit > 100){
		printf("Error: grade is larger than 100 or less than 0!\n");
	}
	
	printf("Letter grade: ");
	switch(digit / 10){
		case 9: case 10: printf("A\n");
		break;
		case 8: printf("B\n");
		break;
		case 7: printf("C\n");
		break;
		case 6: printf("D\n");
		break;
		default: printf("F\n");
		break;
	}
			
	return 0;
}

/*
 * C Programming - A Modern Approach 2nd Edition
 * Chapter 6 Excercises by Reslashd (c)2024
 * 
 */
 
#include <stdio.h>

int main(void){
	float num = 0.0f;
	float largest = 0.0f;
	
	printf("Enter a number ");
	scanf("%f", &num);
	largest = num;
	
	while(num > 0){
		printf("Enter a number ");
		scanf("%f", &num);
		if(num > largest){
			largest = num;
		}		
	}
	printf("The largest number entered was %.2f\n", largest);
	
	return 0;
}

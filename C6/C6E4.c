/*
 * C Programming - A Modern Approach 2nd Edition
 * Chapter 6 Excercises by Reslashd (c)2024
 * 
 */
 

#include <stdio.h>

int main(void){
	/* Calculates a broker's commission */
	
	float commission = 0.0f;
	float value = 0.0f;
	
	do{
		printf("Enter a value of trade: ");
		scanf("%f", &value);
		if (value < 2500.00f){
			commission = 30.00f + .017f * value;
		} else if(value < 6250.00f){
			commission = 56.00f + .0066f * value;
		} else if(value < 20000.00f){
			commission = 76.00f + .0034f * value;
		} else if(value < 50000.00f){
			commission = 100.00f + .0022f * value;
		} else if (value < 500000.00f){
			commission = 155.00f + .0011f * value;
		} else {
			commission = 255.00f + .0009f * value;
		}
	
		if (commission < 39.00f)
			commission = 39.00f;		
		if (value > 0.0f){
			printf("Commission: $%.2f\n", commission);
		}		
	} while(value > 0.0f);
	
		
	return 0;
}

/*
 * C Programming - A Modern Approach 2nd Edition
 * Chapter 5 Excercises by Reslashd (c)2024
 * 
 */
 
#include <stdio.h>
#include <stdbool.h>

int main(void){
	int windspeed = 0;
	
	printf("Enter wind speed in knots: ");
	scanf("%d", &windspeed);
	
	printf("Description: ");
	if(windspeed < 1){
		printf("Calm");
	} else if(windspeed < 4){
		printf("Light Air");
	} else if(windspeed < 28){
		printf("Breeze");
	} else if(windspeed < 48){
		printf("Gale");
	} else if(windspeed < 64){
		printf("Storm");
	} else{
		printf("Hurricane");
	}
	printf("\n");
	return 0;
}

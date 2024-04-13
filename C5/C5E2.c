/*
 * C Programming - A Modern Approach 2nd Edition
 * Chapter 5 Excercises by Reslashd (c)2024
 * 
 */
 
#include <stdio.h>
#include <stdbool.h>

int main(void){
	int h = 0;
	int m = 0;	
	int hc = 0;
	
	printf("Enter a 24-hour time: ");
	scanf("%d:%d", &h, &m);
	
	if(h > 12){
		hc = h - 12;
	}
	else{
		hc = h;
	}
	printf("Equivalent 12-hour time: %d:%.2d ", hc, m);
	if(h <= 12){
		printf("AM");
	}
	else{
		printf("PM");
	}
	return 0;
}

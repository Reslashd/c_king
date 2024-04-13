/*
 * C Programming - A Modern Approach 2nd Edition
 * Chapter 5 Excercises by Reslashd (c)2024
 * 
 */
 
#include <stdio.h>
#include <stdbool.h>

int main(void){
	int i1 = 0;
	int i2 = 0;
	int i3 = 0;
	int i4 = 0;
	int min1 = 0;
	int max1 = 0;
	int min2 = 0;
	int max2 = 0;
	
	printf("Enter four integers: ");
	scanf("%d %d %d %d", &i1, &i2, &i3, &i4);
	
	if(i1 > i2){
		max1 = i1;
		min1 = i2;
	} else {
		max1 = i2;
		min1 = i1;
	}
	
	if(i3 > i4){
		max2 = i3;
		min2 = i4;
	} else {
		max2 = i4;
		min2 = i3;
	}

	if(max1 > max2){
		printf("Largest: %d\n", max1);
	} else{
		printf("Largest: %d\n", max2);
	}
	
	if(min1 < min2){
		printf("Smallest: %d\n", min1);
	} else {
		printf("Smallest: %d\n", min2);
	}

	return 0;
}

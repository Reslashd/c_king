/*
 * C Programming - A Modern Approach 2nd Edition
 * Chapter 5 Excercises by Reslashd (c)2024
 * 
 */
 
#include <stdio.h>
#include <stdbool.h>

int main(void){
	int d, i1, i2, i3, i4, i5, j1, j2, j3, j4, j5, cd, first_sum, second_sum, total = 0;
	
	printf("Enter the first (single) digit: ");
	scanf("%1d", &d);
	printf("Enter the first group of five digits: ");
	scanf("%1d%1d%1d%1d%1d", &i1, &i2, &i3, &i4, &i5);
	printf("Enter the second group of five digits: ");
	scanf("%1d%1d%1d%1d%1d", &j1, &j2, &j3, &j4, &j5);
	printf("Last check digit: ");
	scanf("%d", &cd);
	
	first_sum = d + i2 + i4 + j1 + j3 +j5;
	second_sum = i1 + i3 + i5 + j2 + j4;
	total = 3 * first_sum + second_sum;
	
	if((cd == 9 - ((total - 1) % 10))){
		printf("VALID\n");
	} else {
		printf("INVALID\n");
	}
	
	return 0;
}

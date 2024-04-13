/*
 * C Programming - A Modern Approach 2nd Edition
 * Chapter 3 Excercises by Reslashd (c)2024
 * 
 */
 
#include <stdio.h>

int main(void){
	int gs1, gi, pi, in, cd = 0;
	printf("Enter ISBN: ");
	scanf("%d - %d - %d - %d - %d", &gs1, &gi, &pi, &in, &cd);
	printf("GS1 prefix: %d\n", gs1);
	printf("Group identifier: %d\n", gi);
	printf("Publisher code: %d\n", pi);
	printf("Item number: %d\n", in);
	printf("Check digit: %d\n", cd);
  
	return 0;
}

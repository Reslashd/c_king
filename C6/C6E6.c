/*
 * C Programming - A Modern Approach 2nd Edition
 * Chapter 6 Excercises by Reslashd (c)2024
 * 
 */
 
#include <stdio.h>

int main(void){
	int n = 0;
	int square = 0;
	
	printf("Enter a number: ");
	scanf("%d", &n);
	
	for(int i = 2 ; square < n ; i=i+2){
		square = i * i;
		printf("%d\n", square);		
	}
	return 0;
}

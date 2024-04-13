/*
 * C Programming - A Modern Approach 2nd Edition
 * Chapter 6 Excercises by Reslashd (c)2024
 * 
 */

#include <stdio.h>

int main(void){

	int i, n, odd, square;
	
	printf("This program prints a table of squares.\n");
	printf("Enter number of entries in table: ");
	scanf("%d", &n);
	
	//i = 1;
	odd = 3;
	for (int i = 1, square = 1; i <= n; odd += 2, ++i){
		printf("%10d%10d\n", i, square);
		square += odd;
	}
	
	return 0;
}

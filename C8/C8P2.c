/*
 * C Programming - A Modern Approach 2nd Edition
 * Chapter 8 Excercises by Reslashd (c)2025
 * 
 */
 
#include <stdio.h>

int main(void){					
	int digit_repeated[10] = {0};
	long digit = 0;
	long n = 0;
	
	printf("Enter a number: ");
	scanf("%ld", &n);
	
	while (n > 0){
		digit = n % 10;
		digit_repeated[digit] += 1;
		n /= 10;				
	}
	printf("Digit:       0 1 2 3 4 5 6 7 8 9\n");
	printf("Occurrences: ");
	
	for (int i = 0 ; i < 10 ; i++){
		printf("%d ", digit_repeated[i]);
	}

	printf("\n");
	return 0;
}

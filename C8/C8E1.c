/*
 * C Programming - A Modern Approach 2nd Edition
 * Chapter 8 Excercises by Reslashd (c)2025
 * 
 */
 
#include <stdio.h>
#include <stdbool.h>

int main(void){					
	bool digit_seen[10] = {false};
	bool found_repeat = false;
	int digit_repeated[10] = {1, 1, 1, 1, 1, 1, 1, 1, 1, 1};
	long digit = 0;
	long n = 0;
	
	printf("Enter a number: ");
	scanf("%ld", &n);
	
	while (n > 0){
		digit = n % 10;
		if (digit_seen[digit]){
			digit_repeated[digit] += 1;
			found_repeat = true;
		}
		digit_seen[digit] = true;
		n /= 10;				
	}
	printf("Repeated digit(s): ");
	for (int i = 0 ; i < 10 ; i++){
		if(digit_repeated[i] > 1){
			printf("%d ", i);
		}
	}
	if(found_repeat == false){
		printf("none");
	}
	printf("\n");
	return 0;
}

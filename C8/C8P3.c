/*
 * C Programming - A Modern Approach 2nd Edition
 * Chapter 8 Excercises by Reslashd (c)2025
 * 
 */
 
#include <stdio.h>
#include <stdbool.h>

int main(void){					
	bool digit_seen[10] = {false};
	long digit = 0;
	long n = 0;
	long x = 1;
	
	while (x > 0){		
		printf("Enter a number: ");
		scanf("%ld", &n);
		x = n;
		while (n > 0){
			digit = n % 10;
			if (digit_seen[digit]){
				break;
			}
			digit_seen[digit] = true;
			n /= 10;				
		}
	
		if (n > 0){
			printf("Repeated digit\n");
		} else if (x != 0){
			printf("No repeated digit\n");
		}
	}
	return 0;
}

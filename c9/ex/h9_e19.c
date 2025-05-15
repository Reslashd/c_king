/*
 * C Programming - A Modern Approach 2nd Edition
 * Chapter 9 Excercises by Reslashd (c)2025
 * 
 */
 
#include <stdio.h>

void pb(int n);

int main(void){	
	int num = 0;
	printf("Enter a number: ");
	scanf("%d", &num);	
	printf("Result = ");
	pb(num);
	printf("\n");
	return 0;
}

void pb(int n){	
	if (n != 0) {
		pb(n / 2);
		putchar('0' + n % 2);
	}
}



/*
 * C Programming - A Modern Approach 2nd Edition
 * Chapter 9 Excercises by Reslashd (c)2025
 * 
 */
 
#include <stdio.h>
#include <stdlib.h>

int power(int x, int n);


int main(void){
	int x = 0;
	int n = 0;

	printf("Calculate x^n\n");
	printf("Enter a value for x: ");
		while((scanf("%d", &x)) == 0){
		scanf("%*[^\n]");
		printf("Enter a value for x: ");
	}	

	printf("Enter a value for n: ");
	
	while((scanf("%d", &n)) == 0){
		scanf("%*[^\n]");
		printf("Enter a value for n: ");
	}		

	printf("%d^%d = %d\n",x ,n, power(x, n));
	return EXIT_SUCCESS;
}

int power(int x, int n){
	if (n == 0){
		return 1;
	} else {
		if(n % 2 == 0){	
			return power(x, (n / 2)) * power(x, (n / 2));
		} else {
			return x * power(x, n - 1);
		}
		return 0;
	}
}




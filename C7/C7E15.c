/*
 * C Programming - A Modern Approach 2nd Edition
 * Chapter 7 Excercises by Reslashd (c)2024
 * 
 * Answers 7.15:
 * (a) Factorial of 10
 * (b) Factorial of 16
 * (c) Factorial of 20
 * (d) Factorial of 20 
 * (e) Factorial of 34
 * (f) Factorial of 170
 * (g) Factorial of 1754
 */
  
#include <stdio.h>

int main(void){
	int num = 0;
	int dec_num = 0;
	long double factorial = 0;
	
	printf("Enter a positive integer: ");
	scanf("%d", &num);
	
	dec_num = num;
	factorial = num;
	
	while(dec_num != 1){
		factorial *= (dec_num - 1);
		dec_num--;
	}
	printf("Factorial of %d: %.Lf\n", num, factorial);
	return 0;
}

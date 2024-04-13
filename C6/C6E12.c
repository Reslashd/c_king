/*
 * C Programming - A Modern Approach 2nd Edition
 * Chapter 6 Excercises by Reslashd (c)2024
 * 
 */
 
#include <stdio.h>


int main(void){
	int n = 0;
	float e = 0.0f;
	float result = 0.0f;
	float max = 0.0f;

	printf("Enter a integer: ");
	scanf("%d", &n);
	printf("Enter a max number: ");
	scanf("%f", &max);
	
	e = 1 + (1/((float)n));
	result = e;
	
	for(int j = 1 ; j < n ; j++){
		result = result * e;
		if(result > max){
			goto end;
		}
	}

	end:
	printf("Euler's number is %f\n", result);		
	return 0;
}

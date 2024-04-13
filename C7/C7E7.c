/*
 * C Programming - A Modern Approach 2nd Edition
 * Chapter 7 Excercises by Reslashd (c)2024
 * 
 */
 
#include <stdio.h>
#include <stdbool.h>

int main(void){

	int num1, denom1, num2, denom2, result_num, result_denom;
	char operation = 0;
	bool e_flag = 0;
	
	printf("Enter two fractions sperated by a +, -, * or / sign: ");
	scanf("%d/%d%c%d/%d", &num1, &denom1, &operation, &num2, &denom2);
	
	switch(operation){
		case '+':
		result_num = num1 * denom2 + num2 * denom1;
		result_denom = denom1 * denom2;
		break;
		case '-':
		result_num = num1 * denom2 - num2 * denom1;		
		result_denom = denom1 * denom2;
		break;
		case '*':
		result_num = num1 * num2;
		result_denom = denom1 * denom2;	
		break;
		case '/':
		result_num = num1 * denom2; 
		result_denom = num2 * denom1;	
		break;
		default:		
		printf("Invalid operation!\n");
		e_flag = 1;
	}
	
	if(e_flag != 1){
		printf("The result is %d/%d\n", result_num, result_denom);
	} 
	return 0;
}

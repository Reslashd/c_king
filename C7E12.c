/*
 * C Programming - A Modern Approach 2nd Edition
 * Chapter 7 Excercises by Reslashd (c)2024
 * 
 */
 
#include <stdio.h>
#include <stdbool.h>

int main(void){
	float result = 0.0f;
	float next_operand = 0.0f;
	float num_whole = 0.0f; 
	float num_frac = 0.0f; 
	float divisor = 0.10f;
	int input = 0;
	int operator = 0;
	bool expression_end = 0;
	bool decimal_point = 0;
	bool result_set = 0;
	bool next_operand_set = 0;

	printf("Enter an expression: ");	
	while(expression_end != 1){
		input = getchar();
		if(input == '\n'){
			expression_end = 1;
		}		
			
		switch(input){	
			case '+': case '-': case '*': case '/':	case '\n':
			if(result_set == 0){
				result = num_whole + num_frac;
				result_set = 1;
			} else {
				next_operand = num_whole + num_frac;
				next_operand_set = 1;
			}
			if(result_set == 1 && next_operand_set == 1){
				switch(operator){
					case '+':	
					result += next_operand;
					break;
					case '-':
					result -= next_operand;
					break;
					case '*':
					result *= next_operand;
					break;
					case '/':
					result /= next_operand;		
					break;
				}	
			}			
			operator = input;
			num_whole = 0;
			num_frac = 0;
			divisor = 0.10f;
			decimal_point = 0;					
			break;	
				
			case '0': case '1': case '2': case '3': case '4': 
			case '5': case '6': case '7': case '8': case '9': 
			if(decimal_point == 0){
				num_whole = num_whole * 10;
				num_whole = num_whole + (float)(input - '0');
			}
			else if(decimal_point == 1){						
				num_frac = num_frac + ((float)(input - '0') * divisor);
				divisor /= 10;
			}		
			break;
			
			case '.': case ',':
			decimal_point = 1;
			break;	
		}	

	}		
	printf("Value of expression: %.2lf \n", result);
	
	return 0;
}

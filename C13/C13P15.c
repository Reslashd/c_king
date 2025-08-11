/*
 * C Programming - A Modern Approach 2nd Edition
 * Chapter 13 Excercises by Reslashd (c)2025
 * 
 */
 
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>

#define STACK_SIZE 100
#define N 50

/* external variables */
int contents[STACK_SIZE];
int top = 0;

void make_empty(void);
bool is_empty(void);
bool is_full(void);
void push(int i);
int pop(void);
void stack_overflow(void);
void stack_underflow(void);
int evaluate_RPN_expression(const char *expression);

int main(void){
	char expression[N] = { 0 };
	int input = 0;
	int i = 0;  
		
	for(;;){
		make_empty();
		i = 0;
		printf("Enter an RPN expression: ");
	
		while((input = getchar()) != '\n' && input != EOF && i < N){
			if((input >= '0' && input <= '9') || input == '+' || input == '-' || input == '*' || input == '/' || input == '=' || input == ' '){
				expression[i] = (char)input;
				i++;
			} else if(input == 'q'){
				puts("See ya!");
				return EXIT_SUCCESS;
			}
		}
		expression[i] = '\0';
		printf("Value of expression: %d\n", evaluate_RPN_expression(expression));
	}
		
	return EXIT_SUCCESS;
}

void make_empty(void){
	top = 0;
}

bool is_empty(void){
	return top == 0;
}

bool is_full(void){
	return top == STACK_SIZE;
}

void push(int i){
	if (is_full()){
		stack_overflow();
	} else{
		contents[top++] = i;
	}
}
	
int pop(void){
	if(is_empty()){
		stack_underflow();
	} else{
		return contents[--top];
	}	
	//Should never get here but just in case!
	return 0;
}

void stack_overflow(void){
	puts("Expression is too complex.");
	exit(EXIT_FAILURE);
}

void stack_underflow(void){
	puts("Not enough operands in expression!");
	exit(EXIT_FAILURE);
}

int evaluate_RPN_expression(const char *expression){	
	int op1 = 0;
	int op2 = 0;
	int i = 0;
	int value = 0;
	
	while(expression[i] != '\0'){
		switch(expression[i]){
			//operands
			case '1': case '2': 
			case '3': case '4': 
			case '5': case '6': 
			case '7': case '8': 
			case '9': case '0': 
			push(expression[i] - '0'); // convert char and store actual number
			break;
			//operators
			case '+': 
			op2 = pop();
			op1 = pop();
			push(op1 + op2);
			break;			
			case '-':
			op2 = pop();
			op1 = pop();
			push(op1 - op2);
			break;
			case '*': 
			op2 = pop();
			op1 = pop();
			push(op1 * op2);
			break;
			case '/':
			op2 = pop();
			op1 = pop();
			push(op1 / op2);
			break;
			case '=':
			value = contents[0];
			break;
			//neither
			default:
			break;	
		}
		i++;
	}	
	return value;
}


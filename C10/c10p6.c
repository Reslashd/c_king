/*
 * C Programming - A Modern Approach 2nd Edition
 * Chapter 10 Excercises by Reslashd (c)2025
 * 
 */
 
#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

#define STACK_SIZE 100

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

int main(void){
	char ch = 0;
	int op1 = 0;
	int op2 = 0;
	
	make_empty();
	printf("Enter an RPN expression: ");
	while(scanf(" %c", &ch) == 1){
		switch(ch){
			//operands
			case '1': case '2': 
			case '3': case '4': 
			case '5': case '6': 
			case '7': case '8': 
			case '9': case '0': 
			push(ch - '0'); // convert char and store actual number
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
			printf("Value of expression: %d\n", contents[0]);
			make_empty();	
			printf("Enter an RPN expression: ");				
			break;
			//neither
			default:
			puts("See ya!");
			exit(EXIT_SUCCESS);
			break;	
		}
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
}

void stack_overflow(void){
	puts("Expression is too complex.");
	exit(EXIT_FAILURE);
}

void stack_underflow(void){
	puts("Not enough operands in expression!");
	exit(EXIT_FAILURE);
}

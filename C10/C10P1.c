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
	int input = 0;
	
	make_empty();	
	printf("Enter parentheses and/or braces: ");
	while((input = getchar()) != '\n'){
		switch(input){
			case '(': case '{': 
			push(input);
			break;
			case ')': case '}':
			pop();
			break;
			default:
			puts("Invalid character, terminating.");
			exit(EXIT_FAILURE);
			break;	
		}
	}
	if(is_empty()){
		puts("Parentheses/braces are nested properly.");
	} else{
		puts("Parentheses/braces are not matched!");
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
	puts("Stack overflow");
	exit(EXIT_FAILURE);
}

void stack_underflow(void){
	puts("Stack underflow: Parentheses/braces aren't matched!");
	exit(EXIT_FAILURE);
}

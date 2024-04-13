/*
 * C Programming - A Modern Approach 2nd Edition
 * Chapter 7 Excercises by Reslashd (c)2024
 * 
 */
 
#include <stdio.h>
#include <stdbool.h>

int main(void){
	int input = 0;	
	int initial = 0;
	bool initial_found = 0;
	bool space_found = 0;
	
	printf("Enter a first and last name: ");
	while(initial_found != 1){	
		input = getchar();
		if(input >= 'A' && input <= 'z'){
			initial = input;
			initial_found = 1;
		}
	}
	while(space_found != 1){
		input = getchar();
		if(input == ' '){
			space_found = 1;
		}		
	}
	
	while((input = getchar()) != '\n'){
		if(input != ' '){
			printf("%c", input);
		}
	}
	printf(", %c.\n", initial);
	

}

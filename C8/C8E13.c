/*
 * C Programming - A Modern Approach 2nd Edition
 * Chapter 8 Excercises by Reslashd (c)2025
 * 
 */
 
#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

int main(void){
	int input = 0;	
	int initial = 0;
	bool initial_found = 0;
	bool space_found = 0;
	int lastname[20] = { 0 };
	int i = 0;
	
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
			if(i < 20){
				lastname[i] = input;
				i++;
			}
		}
	}
	printf("You entered the name: ");
	for(int j = 0 ; j < i ; j++){
		printf("%c", lastname[j]);
	}	
	printf(", %c.\n", initial);
	
	return EXIT_SUCCESS;
}

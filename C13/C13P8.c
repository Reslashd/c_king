/*
 * C Programming - A Modern Approach 2nd Edition
 * Chapter 13 Excercises by Reslashd (c)2025
 * 
 */
 
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>

#define N 25

int compute_scrabble_value(const char *word);

int main(void){
	int input = 0;
	int i = 0;
	char word[N] = { 0 }; 
	
	printf("Enter a word: ");	
	while((input = getchar()) != '\n' && input != EOF && i < N){
		if((input >= 'A' && input <= 'Z') || (input >= 'a' && input <= 'z')){
			input = toupper(input);
			word[i] = (char)input;
			i++;
		}
	}
	printf("Scrabble value: %d\n", compute_scrabble_value(word));
	return EXIT_SUCCESS;
}

int compute_scrabble_value(const char *word){
	int value = 0;
	int i = 0;
	while(word[i] != '\0'){
		switch(word[i]){
			case 'A': case 'E': case 'I': case 'L': case 'N': case 'O':
			case 'R': case 'S': case 'T': case 'U':
			value += 1;
			break;
			case 'D': case 'G':
			value += 2;
			break;   
			case 'B': case 'C': case 'M': case 'P': 
			value += 3;
			break; 
			case 'F': case 'H': case 'V': case 'W': case 'Y':
			value += 4;
			break;
			case 'K': 
			value += 5;
			break;
			case 'J': case 'X': 
			value += 8;
			break;
			case 'Q': case 'Z': 
			value += 10;
			break;	
			default:
			break;		
		}
		i++;
	}
	return value;
}


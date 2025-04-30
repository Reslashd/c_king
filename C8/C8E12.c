/*
 * C Programming - A Modern Approach 2nd Edition
 * Chapter 8 Excercises by Reslashd (c)2025
 * 
 */
 
#include <stdio.h>
#include <ctype.h>

int main(void){
	int input = 0;
	int value[26] = { 1, 3, 3, 2, 1, 4, 2, 4, 1, 8, 5, 1, 3, 1, 1, 3, 10, 1, 1, 1, 1, 4, 4, 8, 4, 10};
	int total = 0;
	int index = 0;

	printf("Enter a word: ");
		
	while((input = getchar()) != '\n'){		
		input = toupper(input);
		if(input >= 'A' && input <= 'Z'){
			index = (input - 65);
			total += value[index];			
		}
	}
	printf("Scrabble value: %d\n", total);
	
	return 0;
}

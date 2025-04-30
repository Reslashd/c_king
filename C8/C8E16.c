/*
 * C Programming - A Modern Approach 2nd Edition
 * Chapter 8 Excercises by Reslashd (c)2025
 * 
 */
 
#include <stdio.h>
#include <ctype.h>
#include <stdbool.h>

int main(void){
	
	int letter_count[26] = { 0 };
	int input = 0;
	int i = 0;
	int j = 0;
	bool anagram = 1; // assume word is an anagram until proven wrong
		
	printf("Enter first word: ");	
	
	while((input = getchar()) != '\n'){
		if((input >= 'A' && input <= 'Z') || (input >= 'a' && input <= 'z')){
			input = tolower(input);
			i = input - 97;
			letter_count[i] = letter_count[i] + 1;
		}	
	}
	
	printf("Enter second word: ");	
	
	while((input = getchar()) != '\n'){
		if((input >= 'A' && input <= 'Z') || (input >= 'a' && input <= 'z')){
			input = tolower(input);
			i = input - 97;
			letter_count[i] = letter_count[i] - 1;
		}	
	}
	
	while(j < 25 && anagram == 1){
		if(letter_count[j] > 0){
			anagram = 0; // not an anagram
		}	
		j++;	
	}
	
	if(anagram == 1){
		printf("The words are anagrams.\n");
	} else {
		printf("The words are not anagrams.\n");
	}
	
	return 0;
}

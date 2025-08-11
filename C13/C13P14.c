/*
 * C Programming - A Modern Approach 2nd Edition
 * Chapter 13 Excercises by Reslashd (c)2025
 * 
 */
 
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include <stdbool.h>

#define N 30

bool are_anagrams(const char *word1, const char *word2);

int main(void){
	
	char word1[N] = { 0 };
	char word2[N] = { 0 };
	
	int input = 0;
	int i = 0;
	int j = 0;
	bool anagram = 0;
		
	printf("Enter first word: ");		
	while((input = getchar()) != '\n' && input != EOF && i < (N - 1)){
		if((input >= 'A' && input <= 'Z') || (input >= 'a' && input <= 'z')){
			input = tolower(input);
			word1[i] = (char)input;
			i++;
		}	
	}
	word1[i] = '\0';
	
	printf("Enter second word: ");		
	while((input = getchar()) != '\n' && input != EOF && j < (N - 1)){
		if((input >= 'A' && input <= 'Z') || (input >= 'a' && input <= 'z')){
			input = tolower(input);
			word2[j] = (char)input;
			j++;
		}	
	}
	word2[j] = '\0';
	
	anagram = are_anagrams(word1, word2);
		
	if(anagram == true){
		printf("The words are anagrams.\n");
	} else {
		printf("The words are not anagrams.\n");
	}
	
	return EXIT_SUCCESS;
}

bool are_anagrams(const char *word1, const char *word2){
	int letter_count[26] = { 0 };
	int i = 0;
	int j = 0;
	int c = 0;
	
	while(word1[c] != '\0'){
		i = word1[c] - 'a'; //97
		letter_count[i] = letter_count[i] + 1;
		c++;
	}
	
	c = 0;

	while(word2[c] != '\0'){
		j = word2[c] - 'a'; //97
		letter_count[j] = letter_count[j] - 1;
		c++;
	}
	
	c = 0;
	
	while(c < 26){
		if(letter_count[c] != 0){
			return false;
		} 
		c++;	
	}
	return true;
}

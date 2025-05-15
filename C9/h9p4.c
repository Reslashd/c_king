/*
 * C Programming - A Modern Approach 2nd Edition
 * Chapter 9 Excercises by Reslashd (c)2025
 * 
 */

#include <stdio.h>
#include <ctype.h>
#include <stdbool.h>

void read_word(int letter_count[26]);
bool equal_array(int counts1[26], int counts2[26]);

int main(void){
	int counts1[26] = { 0 };
	int counts2[26] = { 0 };
	
	bool anagram = 1; // assume word is an anagram until proven wrong
		
	printf("Enter first word: ");	
	read_word(counts1);
	printf("Enter second word: ");	
	read_word(counts2);
	
	anagram = equal_array(counts1, counts2);
	
	if(anagram == 1){
		printf("The words are anagrams.\n");
	} else {
		printf("The words are not anagrams.\n");
	}
	
	return 0;
}

void read_word(int counts[26]){
	int i = 0;
	int input = 0;
	while((input = getchar()) != '\n'){
		if((input >= 'A' && input <= 'Z') || (input >= 'a' && input <= 'z')){
			input = tolower(input);
			i = input - 97;
			counts[i] = counts[i] + 1;
		}	
	}	
}

bool equal_array(int counts1[26], int counts2[26]){
	bool anagram = 1;
	int j = 0;
	while(j < 25 && anagram == 1){
		if((counts1[j] - counts2[j]) > 0){
			anagram = 0; // not an anagram
		}	
		j++;	
	}
	return anagram;
}

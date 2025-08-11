/*
 * C Programming - A Modern Approach 2nd Edition
 * Chapter 13 Excercises by Reslashd (c)2025
 * 
 */
 
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define N 25

int compute_vowel_count(const char *sentence);

int main(void){
	int input = 0;
	char sentence[N] = { 0 };	
	int i = 0;
	
	printf("Enter a sentence: ");
	while((input = getchar()) != '\n' && input !=EOF && i < N){
		sentence[i++] = (char)input;
	}
	printf("Your sentence contains %d vowels.", compute_vowel_count(sentence));
	puts("");
	return EXIT_SUCCESS;
}

int compute_vowel_count(const char *sentence){
	int n_vowels = 0;
	int i = 0;
	
	while(sentence[i] != '\0'){
		switch(sentence[i]){
			case 'a': case 'A': case 'e': case 'E': case 'i': case 'I':
			case 'o': case 'O': case 'u': case 'U':
			n_vowels += 1;
			break;
		}
		i++;
	}	
	return n_vowels;	
}



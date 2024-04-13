/*
 * C Programming - A Modern Approach 2nd Edition
 * Chapter 7 Excercises by Reslashd (c)2024
 * 
 */
 
#include <stdio.h>

int main(void){
	int input = 0;
	int n_vowels = 0;
	
	printf("Enter a sentence: ");
	while((input = getchar()) != '\n'){
		switch(input){
			case 'a': case 'A': case 'e': case 'E': case 'i': case 'I':
			case 'o': case 'O': case 'u': case 'U':
			n_vowels += 1;
			break;
		}
	}
	printf("Your sentence contains %d vowels.", n_vowels);
	return 0;
}

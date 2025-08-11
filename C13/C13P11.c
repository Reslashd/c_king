/*
 * C Programming - A Modern Approach 2nd Edition
 * Chapter 13 Excercises by Reslashd (c)2025
 * 
 */
 
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>

#define N 100

double compute_average_word_length(const char *sentence);

int main(void){
	int input = 0;
	int i = 0;
	char sentence[N] = { 0 };
	
	printf("Enter a sentence: ");

	while((input = getchar()) != '\n' && input != EOF && i < N){
		if(input >= ' ' && input <= 'z'){
			sentence[i++] = (char)input;
		}
	}
	printf("Average word length: %.1lf", compute_average_word_length(sentence));
	puts("");
	
	return EXIT_SUCCESS;
}

double compute_average_word_length(const char *sentence){
	int n_chars = 0;
	int n_words = 0;
	double average = 0.0;
	int i = 0;
	bool end_of_string = false;
	
	while(end_of_string != true){
		if(sentence[i] == '\0'){
			n_words++;
			end_of_string = true;
		} else if(sentence[i] == ' '){
			if(sentence[i + 1] != ' '){
				n_words++;		
			}	
		} else if (sentence[i] >= ' ' && sentence[i] <= 'z'){
			n_chars++;
		}
		i++;
	}	
	
	if(n_words != 0){
		average = (double)n_chars / (double)n_words;
	}
	return average;
}

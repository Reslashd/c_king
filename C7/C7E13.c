/*
 * C Programming - A Modern Approach 2nd Edition
 * Chapter 7 Excercises by Reslashd (c)2024
 * 
 */
 
#include <stdio.h>
#include <stdbool.h>

int main(void){
	int input = 0;
	int n_words = 0;
	int n_chars = 0;
	float average = 0.0f;
	bool end_input = 0;	
	
	printf("Enter a sentence: ");

	while(end_input != 1){
		input = getchar();
		switch(input){
			case '\n':			
			n_words++;
			end_input = 1;
			break;
			case ' ':
			n_words++;
			break;
			default:
			n_chars++;	
			break;		
		}
	}
	average = (float)n_chars / (float)n_words;
	printf("Average word length: %.1lf\n", average);
	
	return 0;
}

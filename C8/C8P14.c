/*
 * C Programming - A Modern Approach 2nd Edition
 * Chapter 8 Excercises by Reslashd (c)2025
 * 
 */
 
#include <stdio.h>
#include <stdbool.h>

int main(void){
	int words[50] = { 0 };
	int terminating_char = 0;
	bool end = 0;
	int input = 0;
	int i = 0;
	int last_index;
	int letter_count = 0;
	
	printf("Enter a sentence: ");
	while(i < 50 && end != 1){		
		input = getchar();
		if(input != '.' && input != '?' && input != '!'){
			words[i] = input;
			i++;		
		} else {
			terminating_char = input;
			end = 1;			
		}
	}
	
	// find last stored character in array
	i = 49;
	end = 0;
	
	while(i >= 0 && end != 1){		
		if(words[i] != 0){
			last_index = i;
			end = 1;
		} else{
			i--;
		}		
	}
	
	// find words and print
	while(last_index >= 0){		
		if(last_index != 0){	
			// letter found	
			if(words[last_index] != ' '){
				letter_count++;
			// complete word found
			} else if(words[last_index] == ' '){			
				for(int j = 1; j <= letter_count ; j++){
					printf("%c", words[last_index + j]);
				}		
				printf(" ");	
				letter_count = 0;
			} 	
		// first word in beginning of array found		
		} else if(last_index == 0){
			for(int j = 0; j <= letter_count ; j++){
				printf("%c", words[last_index + j]);							
			}	
		}	
		
		last_index--;					
	}
	
	printf("%c\n", terminating_char);
	return 0;
}

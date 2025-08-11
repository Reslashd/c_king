/*
 * C Programming - A Modern Approach 2nd Edition
 * Chapter 13 Excercises by Reslashd (c)2025
 * 
 */
 
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void){
	
	char smallest_word[21];
	char largest_word[21];
	char input_word[21];
	int ch = 0;
	
	memset(largest_word, '\0', sizeof(smallest_word));
	memset(largest_word, '\0', sizeof(largest_word));
	
	while((strlen(input_word) != 4)){
		int i = 0;
		memset(input_word, '\0', sizeof(input_word)); //clear
		
		while((ch = getchar()) != '\n' && ch != EOF){
			if(i < 21){			
				input_word[i++] = (char)ch;
			}					
		}	
						
		if((strcmp(input_word, smallest_word)) < 0){
			strcpy(smallest_word, input_word);
		}
		
		if((strcmp(input_word, largest_word)) > 0){
			strcpy(largest_word, input_word);
		}			
	}
	
	printf("\nSmallest word: %s\n", smallest_word);
	printf("Largest word: %s\n", largest_word);	
	
	return EXIT_SUCCESS;
}


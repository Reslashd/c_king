/*
 * C Programming - A Modern Approach 2nd Edition
 * Chapter 12 Excercises by Reslashd (c)2025
 * 
 */
 
#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <ctype.h>

int main(void){
	int words[50] = { 0 };
	int terminating_char = 0;
	bool end = 0;
	int input = 0;
	int letter_count = 0;	
	int *p = words;
	int *last_index;
	
	printf("Enter a sentence: ");
	while(p < words + (50 - 1) && end != 1){		
		input = getchar();
		if(input != '.' && input != '?' && input != '!'){
			*p = input;
			p++;		
		} else {
			terminating_char = input;
			end = 1;			
		}
	}
	
	// find last stored character in array
	p = words + (50 - 1);
	end = 0;
	
	while(p >= words && end != 1){		
		if(*p != 0){
			last_index = p;
			end = 1;
		} else{
			p--;
		}		
	}
	
	printf("Reversal of sentence: ");
	// find words and print
	while(last_index >= words){		
		if(*last_index != 0){	
			// letter found	
			if(*last_index != ' '){
				letter_count++;
			// complete word found
			} else if(*last_index == ' '){			
				for(int j = 1; j <= letter_count ; j++){
					printf("%c", *(last_index + j));
				}		
				printf(" ");	
				letter_count = 0;
			} 				
		} 		
		last_index--;					
	}	
	// Quick fix to always print first word in array (logic in project 14 not great).
	if (letter_count > 0) {
    for (int j = 0; j < letter_count; j++) {
        printf("%c", *(words + j));
    }    
}
	
	printf("%c\n", terminating_char);
	return EXIT_SUCCESS;
}

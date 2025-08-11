/*
 * C Programming - A Modern Approach 2nd Edition
 * Chapter 13 Excercises by Reslashd (c)2025
 * 
 */
 
#include <stdio.h>
#include <stdlib.h>
#include <string.h>


int main(void){
	int input = 0;
	char terminating_char = 0;
	int i = 0;
	int j = 0;
	
	char words[30][21] = { 0 };
	
	printf("Enter a sentence: ");
	while((input = getchar()) && input != EOF && i < 30 && j < 21){
		if(input == ' '){
			words[i][j] = '\0';
			i++;			
			j = 0;
		}else if(input == '.' || input == '?' || input == '!'){
			words[i][j] = '\0';
			terminating_char = (char)input;
			break;
		} else{
			if(j < 20){
				words[i][j] = (char)input;
				j++;
			}			
		}
	}
	
	// print backwards	
	while(i >= 0){
		printf("%s", words[i]);
		if(i > 0){
			printf(" ");
		}
		i--;
	}	
	printf("%c", terminating_char);
	puts("");
	
	return EXIT_SUCCESS;
}


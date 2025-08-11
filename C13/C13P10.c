/*
 * C Programming - A Modern Approach 2nd Edition
 * Chapter 13 Excercises by Reslashd (c)2025
 * 
 */
 
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

#define N 35

void reverse_name(char *name);

int main(void){
	int input = 0;	
	int i = 0;
	char name[N] = { 0 };
	
	printf("Enter a first and last name: ");
	
	while((input = getchar()) != '\n' && input != EOF && i < N){
		if(input >= ' ' && input <= 'z'){
			name[i++] = (char)input;
		}
	}	
	
	reverse_name(name);
	puts(name);
	puts("");
	return EXIT_SUCCESS;
}

void reverse_name(char *name){
	char temp_name[N] = { 0 };
	int initial_loc = 0;
	int i = 0;
	int j = 0;
	
	//find initial
	while(name[i] != '\0'){
		if((name[i] >= 'A' && name[i] <= 'Z') || (name[i] >= 'a' && name[i] <= 'z')){	
			initial_loc = i;
			break;
		}			
		i++;		
	}
	//find first space after first name
	while(name[i] != '\0' && name[i] != ' '){
		i++;
	}	
	
	i++; // ignore space between first and lastname
	
	//find and store last name in temp string
	while(name[i] != '\0'){			
		temp_name[j] = name[i]; 
		i++;
		j++;
	}				
	
	// Add a comma, space and the initial ending with a dot.	
	temp_name[j] = ',';
	temp_name[j + 1] = ' ';
	temp_name[j + 2] = name[initial_loc];
	temp_name[j + 3] = '.';		
	
	strcpy(name, temp_name);
}


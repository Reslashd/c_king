/*
 * C Programming - A Modern Approach 2nd Edition
 * Chapter 13 Excercises by Reslashd (c)2025
 * 
 */
 
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

int count_spaces(const char s[]);

int main(void){
	char s[30];
	strcpy(s, "This is a test");
	printf("The string contains %d spaces\n", count_spaces(s));
	return EXIT_SUCCESS;
}

int count_spaces(const char s[]){
	int count = 0;
	
	while(*s != '\0'){
		if(isspace(*s) != 0){
			count++;
		}
		s++;
	}
	return count;
}


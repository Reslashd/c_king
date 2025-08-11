/*
 * C Programming - A Modern Approach 2nd Edition
 * Chapter 13 Excercises by Reslashd (c)2025
 * 
 */
 
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <stdbool.h>

#define N 50

int read_line(char str[], int n);

int main(void){
	char str[N];
	read_line(str, N);
	
	printf("%s", str);
	return EXIT_SUCCESS;
}

int read_line(char str[], int n){
	int ch, i = 0;
	while ((ch = getchar()) != '\n'){
		if ((i < n) && (isspace(ch) == false)){
			str[i++] = (char)ch;
		}
	}
	str[i] = '\0'; 
	return i;	
}

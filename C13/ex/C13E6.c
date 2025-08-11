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

void censor(char str[], int n);
int read_line(char str[], int n);

int main(void){
	char str[N];
	read_line(str, N);
	censor(str, N);
	
	printf("%s", str);
	return EXIT_SUCCESS;
}

int read_line(char str[], int n){
	int ch, i = 0;
	while ((ch = getchar()) != '\n'){
		if (i < n){
			str[i++] = (char)ch;
		}
	}
	str[i] = '\0'; 
	return i;	
}

void censor(char str[], int n){
	int i = 0;
	while(i < n && str[i] != '\0'){
		if(str[i] == 'f' && str[i + 1] == 'o' && str[i + 2] == 'o'){
			str[i] = 'x';
			str[i + 1] = 'x';
			str[i + 2] = 'x';
			i+= 3;
		}		
		i++;
	}
}

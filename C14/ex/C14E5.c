/*
 * C Programming - A Modern Approach 2nd Edition
 * Chapter 14 Excercises by Reslashd (c)2025
 * 
 */
 
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define TOUPPER(c) ('a'<=(c)&&(c)<='z'?(c)-'a'+'A':(c))

int main(void){	
	//a
	int i = 0;
	char s[20];
	strcpy(s, "abcd");
	i = 0;
	putchar(TOUPPER(s[++i])); //expect ABCD > result = D
	
	strcpy(s, "0123");
	i = 0;
	putchar(TOUPPER(s[++i])); //expect 0123  > result = 2
	
	return EXIT_SUCCESS;	
}


/*
 * C Programming - A Modern Approach 2nd Edition
 * Chapter 13 Excercises by Reslashd (c)2025
 * 
 */
 
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char s2[30];
char *duplicate(const char *p);

int main(void){
	char s1[30];

	strcpy(s1, "Test string");
	printf("%s\n", s1);
	duplicate(s1);
	printf("%s\n", s2);
	
	return EXIT_SUCCESS;
}

char *duplicate(const char *p){
	char *q = s2;
	strcpy(q, p);
	return q;
}



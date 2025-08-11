/*
 * C Programming - A Modern Approach 2nd Edition
 * Chapter 13 Excercises by Reslashd (c)2025
 * 
 */
 
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int strcmp2(char *s, char *t);
int strcmp3(char *s, char *t);

int main(void){
	char s1[30];
	char s2[30];

	strcpy(s1, "abc");
	strcpy(s2, "abc");
	printf("%d\n", strcmp2(s1, s2));
	printf("%d\n", strcmp3(s1, s2));
	
	return EXIT_SUCCESS;
}

int strcmp2(char *s, char *t){
	int i;
	
	for (i = 0; s[i] == t[i]; i++){
		if(s[i] == '\0'){
			return 0;
		} 		
	}	
	return s[i] - t[i];
}

int strcmp3(char *s, char *t){
	for (; *s == *t; s++, t++){
		if(*s == '\0'){
			return 0;
		} 		
	}	
	return *s - *t;
}

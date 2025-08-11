/*
 * C Programming - A Modern Approach 2nd Edition
 * Chapter 13 Excercises by Reslashd (c)2025
 * 
 */
 
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void){
	char s1[30];
	char s2[30];
	strcpy(s1, "computer");
	strcpy(s2, "science");
	if (strcmp(s1, s2) < 0){
		strcat(s1, s2);
	} else {
		strcat(s2, s1);
	}
	s1[strlen(s1)-6] = '\0'; //computers[add \0 here ending string]cience = computers
		
	printf("%s", s1);
	
	return EXIT_SUCCESS;
}



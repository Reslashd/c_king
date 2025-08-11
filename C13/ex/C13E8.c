/*
 * C Programming - A Modern Approach 2nd Edition
 * Chapter 13 Excercises by Reslashd (c)2025
 * 
 */
 
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void){
	char str[30];
	strcpy(str, "tire-bouchon");
	strcpy(&str[4], "d-or-wi"); //tired-or-wi\0
	strcat(str, "red?"); //tired-or-wired\0
		
	printf("%s", str);
	
	return EXIT_SUCCESS;
}



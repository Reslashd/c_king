/*
 * C Programming - A Modern Approach 2nd Edition
 * Chapter 13 Excercises by Reslashd (c)2025
 * 
 */
 
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void){
	char str[10] = { 'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j'};
	
	//	*str = 0; 
	//str[0] = '\0';
	//	strcpy(str, "");
	strcat(str, ""); // <-- strcat is different
	
	for(int i = 0; i < 10 ; i++){
		printf("str[%d] = %c\n", i, str[i]);
	}
	
	return EXIT_SUCCESS;
}



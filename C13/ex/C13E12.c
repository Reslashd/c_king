/*
 * C Programming - A Modern Approach 2nd Edition
 * Chapter 13 Excercises by Reslashd (c)2025
 * 
 */
 
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void get_extension(const char *file_name, char *extension);

int main(void){
	char file_name[30];
	char extension[4];
	
	strcpy(file_name, "memo.txt");
	get_extension(file_name, extension);
	printf("Extension is %s\n", extension);
	
	return EXIT_SUCCESS;
}

void get_extension(const char *file_name, char *extension){	
	for(int i = 0 ; i < 30 ; i++){
		if(file_name[i] == '.'){
			strcpy(extension, &file_name[i]);
		}
	}
}

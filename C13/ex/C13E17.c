/*
 * C Programming - A Modern Approach 2nd Edition
 * Chapter 13 Excercises by Reslashd (c)2025
 * 
 */
 
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>
#include <ctype.h>

bool test_extension(const char *file_name, const char *extension);

int main(void){
	printf("%s", test_extension("memo.txt", "TXT") ? "true" : "false");
	
	return EXIT_SUCCESS;
}


bool test_extension(const char *file_name, const char *extension){
	bool match = true;
	
	while(*file_name){
		if(*file_name++ == '.'){			
			while(*file_name){
				if(toupper(*file_name) != *extension){
					return false;
				}
				file_name++;
				extension++;						
			} 
		}
	}	
	return match;
}

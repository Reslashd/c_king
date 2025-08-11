/*
 * C Programming - A Modern Approach 2nd Edition
 * Chapter 13 Excercises by Reslashd (c)2025
 * 
 */
 
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void remove_filename(char *url);

int main(void){
	char url[] = "https://www.knking.com/index.html";
	printf("%s\n", url);
	puts("Removing filename from url...");
	remove_filename(url);
	printf("Result: %s\n", url);
	
	return EXIT_SUCCESS;
}

void remove_filename(char *url){	
	long int length = 0;
	char *p = url;
	
	while(*p){
		p++;
	}	
	
	length = p - url;	
	p = url + (length - 1);
	
	while(p >= url){
		if(*p == '/'){
			*p = '\0';
			break;
		}
		p--;
	}
}

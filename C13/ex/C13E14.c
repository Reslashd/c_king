/*
 * C Programming - A Modern Approach 2nd Edition
 * Chapter 13 Excercises by Reslashd (c)2025
 * 
 */
 
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void){
	char s[] = "Hsjodi", *p;
	
	for (p = s; *p; p++){
		--*p;
	}
	puts(s); //Grinch
	return EXIT_SUCCESS;
}



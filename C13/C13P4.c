/*
 * C Programming - A Modern Approach 2nd Edition
 * Chapter 13 Excercises by Reslashd (c)2025
 * 
 */
 
#include <stdio.h>
#include <stdlib.h>

//reverse.c

int main(int argc, char *argv[])
{
	for(int i = (argc - 1) ; i > 0 ; i--){
		printf("%s ", argv[i]);
	}
	puts("");
	return EXIT_SUCCESS;
}

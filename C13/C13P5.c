/*
 * C Programming - A Modern Approach 2nd Edition
 * Chapter 13 Excercises by Reslashd (c)2025
 * 
 */
 
#include <stdio.h>
#include <stdlib.h>

//sum.c

int main(int argc, char *argv[])
{
	int sum = 0;
	
	for(int i = 1; i < argc ; i++){
		sum = sum + atoi(argv[i]);
	}	
	printf("Total: %d\n", sum);
	return EXIT_SUCCESS;
}

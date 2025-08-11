/*
 * C Programming - A Modern Approach 2nd Edition
 * Chapter 13 Excercises by Reslashd (c)2025
 * 
 */
 
#include <stdio.h>
#include <stdlib.h>

int main(void){
	// b, c, e, h, i
	printf("%c", '\n');
	//printf("%c", "\n"); expects int but get pointer to char array
	//printf("%s", '\n'); expects pointer to char but gets int
	printf("%s", "\n");
	//printf('\n'); expect pointer but gets int
	printf("\n");
	putchar('\n');
	//putchar("\n"); expects int but gets pointer
	//puts('\n'); expects pointer but gets int
	puts("\n");
	puts("");
	return EXIT_SUCCESS;
}

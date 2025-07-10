/*
 * C Programming - A Modern Approach 2nd Edition
 * Chapter 12 Excercises by Reslashd (c)2025
 * 
 */
 
#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

bool search(const int temperatures[][24], int key);

int main(void){
	int temperatures[7][24] = { 0 };
	int key = 32;
	
	
	temperatures[1][10] = 15;
	temperatures[4][22] = 32;
	
	printf("Key found = %d\n", search((const int (*)[24])temperatures, key));

	return EXIT_SUCCESS;		
}

bool search(const int temperatures[][24], int key){
	const int *p;
	for(p = &temperatures[0][0] ; p <= &temperatures[7-1][24-1] ; p++){		
		if(*p == key){
			return true;
		} 		
	}		
	return false;	
}

/*
 * C Programming - A Modern Approach 2nd Edition
 * Chapter 14 Excercises by Reslashd (c)2025
 * 
 */
 
#include <stdio.h>
#include <stdlib.h>

#define ENGLISH
//#define FRENCH
#define SPANISH


int main(void){	
	#ifdef ENGLISH
	puts("Insert Disk 1");
	#endif
	
	#ifdef FRENCH
	puts("Inserez Le Disque 1");
	#endif	
	
	#ifdef SPANISH
	puts("Inserte El Disco 1");
	#endif	
		
		
	return EXIT_SUCCESS;	
}




/*
 * C Programming - A Modern Approach 2nd Edition
 * Chapter 14 Excercises by Reslashd (c)2025
 * 
 */
 
#include <stdio.h>
#include <stdlib.h>

#define N 100

void f(void);

int main(void){	
	f();
	#ifdef N
	#undef N // makes N undefined so the program will show undefined.
	#endif	
	return EXIT_SUCCESS;	
}

void f(void){
	#if defined(N)
	printf("N is %d\n", N);
	#else
	printf("N is undefined\n");
	#endif
}


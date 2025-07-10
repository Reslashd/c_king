/*
 * C Programming - A Modern Approach 2nd Edition
 * Chapter 12 Excercises by Reslashd (c)2025
 * 
 */
 
#include <stdio.h>
#include <stdlib.h>

int main(void){
	int a[] = { 1, 2, 3 };
	int *p;
	p = a;
	
	//p == a[0]; mismatched
	
	printf("%d\n", p == &a[0]);
	printf("%d\n", *p == a[0]);
	printf("%d\n", p[0] = a[0]);
	
	
	return EXIT_SUCCESS;
}

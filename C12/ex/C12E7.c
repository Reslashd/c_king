/*
 * C Programming - A Modern Approach 2nd Edition
 * Chapter 12 Excercises by Reslashd (c)2025
 * 
 */
 
#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

bool search(const int a[], int n, int key);

int main(void){
	int n = 4;
	int num = 0;
	int a[n];
	int key = 3;
	int *p;
	
	for(p = a ; p < (a + n) ; p++){
		*p = num + 1; 
		num++;
	}

	printf("Key found = %d\n", search(a, n, key));
	return EXIT_SUCCESS;		
}

bool search(const int a[], int n, int key){
	int *p;
	for(p = a ; p < (a + n) ; p++){		
		if(*p == key){
			return true;
		} 		
	}		
	return false;	
}


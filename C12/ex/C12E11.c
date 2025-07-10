/*
 * C Programming - A Modern Approach 2nd Edition
 * Chapter 12 Excercises by Reslashd (c)2025
 * 
 */
 
#include <stdio.h>
#include <stdlib.h>

int find_largest(int a[], int n);


int main(void){
	int n = 5;
	int num = 1;
	int a[n];
	int *p;
	
	for(p = a ; p < (a + n) ; p++){
		*p = num;
		num++; 
	}
	
	for(p = a ; p < (a + n) ; p++){
		printf("%d ", *p);
	}
	
	printf("Largest = %d\n", find_largest(a, n));
	return EXIT_SUCCESS;		
}

int find_largest(int a[], int n){
	int max;
	max = a[0];
	int *p;

	for (p = a ; p < (a + n) ; p++){
		if(*p > max){
			max = *p;
		}		
	}
	return max;
}


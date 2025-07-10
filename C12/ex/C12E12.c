/*
 * C Programming - A Modern Approach 2nd Edition
 * Chapter 12 Excercises by Reslashd (c)2025
 * 
 */
 
#include <stdio.h>
#include <stdlib.h>

void find_two_largest(const int *a, int n, int *largest, int *second_largest);


int main(void){
	int n = 5;
	int num = 1;
	int a[n];
	int *p;
	int largest = 0;
	int second_largest = 0;
	
	for(p = a ; p < (a + n) ; p++){
		*p = num;
		num++; 
	}
	
	for(p = a ; p < (a + n) ; p++){
		printf("%d ", *p);
	}
	printf("\n");
	
	find_two_largest(a, n, &largest, &second_largest);
	printf("Largest = %d\n", largest);
	printf("Second largest = %d\n", second_largest);
	
	return EXIT_SUCCESS;		
}

void find_two_largest(const int *a, int n, int *largest, int *second_largest){
	const int *p = a;
	*largest = *p;
	*second_largest = *p;
	
	for ( ; p < (a + n) ; p++){
		if(*p > *largest){
			*second_largest = *largest;
			*largest = *p;
		} else if(*p > *second_largest){
			*second_largest = *p;
		}	
	}
}

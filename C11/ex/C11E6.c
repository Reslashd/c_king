/*
 * C Programming - A Modern Approach 2nd Edition
 * Chapter 11 Excercises by Reslashd (c)2025
 * 
 */
 
#include <stdio.h>
#include <stdlib.h>

void find_two_largest(int a[], int n, int *largest, int *second_largest);
int main(void){
	int n = 7;
	int a[n];
	int largest = 0;
	int second_largest = 0;
	a[0] = 300;
	a[1] = 2;
	a[2] = 9;
	a[3] = 100;
	a[4] = 25;
	a[5] = 1001;
	a[6] =  34;
	
	find_two_largest(a, n, &largest, &second_largest);
	printf("Largest = %d\n", largest);
	printf("Second largest = %d\n", second_largest);

	return EXIT_SUCCESS;
}

void find_two_largest(int a[], int n, int *largest, int *second_largest){
	int i;
	for (i = 0 ; i < n ; i++){
		if(a[i] > *largest){
			*second_largest = *largest;
			*largest = a[i];			
		} else if(a[i] > *second_largest){
			*second_largest = a[i];
		}
	}
}

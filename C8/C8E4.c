/*
 * C Programming - A Modern Approach 2nd Edition
 * Chapter 8 Excercises by Reslashd (c)2025
 * 
 */
 
#include <stdio.h>

#define N 10
#define SIZE ((int)(sizeof(a) / sizeof(a[0])))

int main(void){					
	int a[N];
	int i = 0;
	
	printf("Enter %d numbers: ", N);
	for (i = 0 ; i < SIZE ; i++){
		scanf("%d", &a[i]);
	}
	
	printf("In reverse order:");
	for (i = N - 1; i >= 0 ; i--){
		printf(" %d", a[i]);
	}
	printf("\n");
	
	return 0;
}

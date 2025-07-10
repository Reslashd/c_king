/*
 * C Programming - A Modern Approach 2nd Edition
 * Chapter 12 Excercises by Reslashd (c)2025
 * 
 */

/*********************************************************
 * From C PROGRAMMING: A MODERN APPROACH, Second Edition *
 * By K. N. King                                         *
 * Copyright (c) 2008, 1996 W. W. Norton & Company, Inc. *
 * All rights reserved.                                  *
 * This program may be freely distributed for class use, *
 * provided that this copyright notice is retained.      *
 *********************************************************/

/* maxmin.c (Chapter 11, page 250) */
/* Finds the largest and smallest elements in an array */

#include <stdio.h>
#include <stdlib.h>

#define N 10

void max_min(int a[], int n, int *max, int *min);

int main(void)
{
	int b[N], i, big, small;

	printf("Enter %d numbers: ", N);
	for (i = 0; i < N; i++)
		scanf("%d", &b[i]);

	max_min(b, N, &big, &small);

	printf("Largest: %d\n", big);
	printf("Smallest: %d\n", small);

	return EXIT_SUCCESS;
}

void max_min(int a[], int n, int *max, int *min)
{
	int *p;
	*max = *min = a[0];
	
	for (p = &a[1] ; p < (&a[n] - 1); p++) {
		if (*p > *max)
		*max = *p;
		else if (*p < *min)
		*min = *p;
	}
}

/*
 * C Programming - A Modern Approach 2nd Edition
 * Chapter 11 Excercises by Reslashd (c)2025
 * 
 */
 
#include <stdio.h>
#include <stdlib.h>

void avg_sum(double a[], int n, double *avg, double *sum);

int main(void){
	int n = 5;
	double avg = 0.0;
	double sum = 0.0;
	double a[n];
	a[0] = 2;
	a[1] = 2;
	a[2] = 2;
	a[3] = 2;
	a[4] = 4;

	avg_sum(a, n, &avg, &sum);
	printf("%lf", avg);
	
	return EXIT_SUCCESS;
}

void avg_sum(double a[], int n, double *avg, double *sum){
	int i;
	*sum = 0.0;
	for (i = 0 ; i < n ; i++){
		*sum += a[i];
	}
	*avg = *sum / n;
}

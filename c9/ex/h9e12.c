/*
 * C Programming - A Modern Approach 2nd Edition
 * Chapter 9 Excercises by Reslashd (c)2025
 * 
 */
 
#include <stdio.h>

double inner_product(double a[], double b[], int n);



int main(void){	
	int n = 3;
	int num = 2;
	double product = 0.0;
	double a[n];
	double b[n];
	
	for(int i = 0 ; i < n ; i++){
		a[i] = a[i] + num;
		b[i] = b[i] + num;
		num = num + 2;
	}
	
	product = inner_product(a, b, n);
	printf("Inner product = %.2lf", product);
	
	return 0;
}

double inner_product(double a[], double b[], int n){
	double product = 0.0;
	
	while(n >= 0){
		product = product + (a[n] * b[n]);	
		printf("product = %f\n", product);
		n--;	
	}	
	return product;
}

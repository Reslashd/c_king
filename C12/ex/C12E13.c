/*
 * C Programming - A Modern Approach 2nd Edition
 * Chapter 12 Excercises by Reslashd (c)2025
 * 
 */
 
#include <stdio.h>
#include <stdlib.h>

#define N 10

int main(void){
	double ident[N][N];
	double *p;
	int consec_zero = 0;
	
	for(p = &ident[0][0] ; p <= &ident[N-1][N-1] ; p++){		
		if(consec_zero == N || p == &ident[0][0]){
			*p = 1.0;
			consec_zero = 0;
		} else{
			*p = 0.0;
			consec_zero++;
		}
	}
	
	for (p = &ident[0][0] ; p <= &ident[N-1][N-1] ; p++){
		if(consec_zero == (N-1)){
			printf("%.2lf ", *p);
			printf("\n");
			consec_zero = 0;
		} else{
			printf("%.2lf ", *p);
			consec_zero++;
		}	
	}
	
	return EXIT_SUCCESS;		
}


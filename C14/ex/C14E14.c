/*
 * C Programming - A Modern Approach 2nd Edition
 * Chapter 14 Excercises by Reslashd (c)2025
 * 
 */
 
#include <stdio.h>
#include <stdlib.h>

#define N = 10 //should be without = 
#define INC(x) x+1
#define SUB (x,y) x-y //space should be removed
#define SQR(x) ((x)*(x))
#define CUBE(x) (SQR(x)*(x)) //double brackets needed?
#define M1(x,y) #x#y //needs space between #x and #y
#define M2(x,y) #x #y

int main(void){	
	int a[N], i, j, k, m; //define N has to be fixed
	
	#ifdef N 
	i = j;
	#else
	j = i;
	#endif
	
	i = 10 * INC(j);
	i = SUB(j, k); // space between sub and (x,y) has to be removed
	i = SQR(SQR(j));
	i = CUBE(j);
	i = M1(j, k); //= M1(jk) instead of M1(j,k)
	puts(M2(i, j)); 
	
	#undef SQR
	i = SQR(j);
	#define SQR
	i = SQR(j);
		
	return EXIT_SUCCESS;	
}




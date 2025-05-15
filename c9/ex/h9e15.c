/*
 * C Programming - A Modern Approach 2nd Edition
 * Chapter 9 Excercises by Reslashd (c)2025
 * 
 */
 
#include <stdio.h>

double median(double x, double y, double z);

int main(void){	
	double x = 3.2;
	double y = 1.2;
	double z = 8.7;

	printf("%.2f", median(x, y, z));
	return 0;
}

double median(double x, double y, double z){
	double median = 0.0;
	if (x <= y)
		if (y <= z) median = y;
		else if (x <= z) median = z;
		else median = x;
	
	if(z <=  y) median = y;
	if(z <= z) median = x;
	
	return median;	
}



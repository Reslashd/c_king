/*
 * C Programming - A Modern Approach 2nd Edition
 * Chapter 7 Excercises by Reslashd (c)2024
 * 
 */
 
#include <stdio.h>
#include <stdbool.h>
#include <math.h>

int main(void){
	double x = 0.0;
	double y = 1.0;
	double average = 0.0;
	double x_div_y = 0;
	double abs_dif = 0.0;
	double prod_y = 0.0;
	double prev_y = 0.0;
	double square_root = 0.0;
	bool absolute_dif = 0;
	
	printf("Enter a positive number: ");
	scanf("%lf", &x);
	
	while(absolute_dif != 1){
		x_div_y = x/y;
		average = (y + x_div_y) / 2;
		prev_y = y;
		y = average;
		prod_y = y * 0.00001;
		abs_dif = fabs(prev_y - y);

		if(abs_dif < prod_y){
			absolute_dif = 1;
			square_root = average;
		}
	}
		
	printf("Square root: %.5lf\n", square_root);
	return 0;
}

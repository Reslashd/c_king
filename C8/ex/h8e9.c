/*
 * C Programming - A Modern Approach 2nd Edition
 * Chapter 8 Excercises by Reslashd (c)2025
 * 
 */
 
#include <stdio.h>
#include <stdbool.h>

int main(void){					
	double temperature[30][24] = {[0][1] = 10.0, [1][23] = 15.0, [29][8] = 18.0};
	double total_hours = 0.0;
	
	for (int i = 0 ; i < 30 ; i++){
		for (int j = 0; j < 24 ; j++){
			total_hours += temperature[i][j];
		}
	}
	printf("Average = %lf\n", total_hours / 30);
	
	return 0;
}

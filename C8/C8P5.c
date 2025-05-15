/*
 * C Programming - A Modern Approach 2nd Edition
 * Chapter 8 Excercises by Reslashd (c)2025
 * 
 */
 
#include <stdio.h>

#define NUM_RATES ((int) (sizeof(value) / sizeof(value[0])))
#define INITIAL_BALANCE 100.00

int main(void){		
	int i = 0;
	int low_rate = 0.0;
	int num_years = 0;
	int year = 0;
	double value[5];
	
	printf("Enter interest rate: ");
	scanf("%d", &low_rate);
	printf("Enter number of years: ");
	scanf("%d", &num_years);
	
	printf("\nYears");
	for (i = 0 ; i < NUM_RATES ; i++){
		printf("%6d%% ", low_rate + i);
		value[i] = INITIAL_BALANCE;
	}
	printf("\n");
	
	for (year = 1 ; year <= num_years ; year++){
		printf("%3d    ", year);
		for (i = 0 ; i < NUM_RATES; i++){ 
			for(int j = 1 ; j <= 12 ; j++){
				value[i] += ((double)(low_rate + i) /12) / 100.0 * value[i];
			}			
			printf("%7.2f", value[i]);
		}
		printf("\n");
	}			

	return 0;
}

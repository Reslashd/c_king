/*
 * C Programming - A Modern Approach 2nd Edition
 * Chapter 8 Excercises by Reslashd (c)2025
 * 
 */
 
#include <stdio.h>

int main(void){		
	
	int array[5][5] = { 0 };
	int i = 0;
	int j = 0;
	int row_totals = 0;
	int column_totals = 0;
	
	for ( i = 0 ; i < 5 ; i++){
		printf("Enter row %d: ", i + 1);
		for(j = 0; j < 5 ; j++){
			scanf("%d", &array[i][j]);
		}
	}	
	
	printf("\nRow totals: ");
	for (i = 0 ; i < 5 ; i++){		
		for(j = 0 ; j < 5 ; j++){
			row_totals += array[i][j]; 
		}
		printf("%d ", row_totals);
		row_totals = 0;
	}	
	
	printf("\nColumn totals: ");
	for (j = 0 ; j < 5 ; j++){		
		for(i = 0 ; i < 5 ; i++){
			column_totals += array[i][j]; 
		}
		printf("%d ", column_totals);
		column_totals = 0;
	}	
	printf("\n");
	
	return 0;
}

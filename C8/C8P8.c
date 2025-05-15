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
	int highest = 0;
	int lowest = 0;
	double row_totals = 0.0f;
	double column_totals = 0.0f;
	
	for ( i = 0 ; i < 5 ; i++){
		printf("Grades student %d: ", i + 1);
		for(j = 0; j < 5 ; j++){
			scanf("%d", &array[i][j]);
		}
	}	
	
	printf("\n*** Student scores ***\n\n");
	for (i = 0 ; i < 5 ; i++){		
		for(j = 0 ; j < 5 ; j++){
			row_totals += array[i][j]; 
		}
		printf("Student %d:\n", i + 1);
		printf("Total score %.2lf\n", row_totals);
		printf("Average score %.2lf\n\n", row_totals / 5);
		row_totals = 0;
	}	
	
	printf("*** Quiz scores ***\n\n");
	for (j = 0 ; j < 5 ; j++){		
		for(i = 0 ; i < 5 ; i++){
			column_totals += array[i][j];
			if(array[i][j] > highest){
				highest = array[i][j];
			}
			
			if(lowest == 0){	
				lowest = array[i][j];
			} else if(array[i][j] < lowest){
				lowest = array[i][j];
			}
			
		}
		printf("Quiz %d:\n", j + 1);
		printf("Total score %.2lf\n", column_totals);
		printf("Average score %.2lf\n", column_totals / 5);
		printf("Highest score %d\n", highest);
		printf("Lowest score %d\n\n" , lowest);
		column_totals = 0;
		highest = 0;
		lowest = 0;
	}	
	printf("\n");
	
	return 0;
}

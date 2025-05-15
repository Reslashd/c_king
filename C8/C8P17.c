/*
 * C Programming - A Modern Approach 2nd Edition
 * Chapter 8 Excercises by Reslashd (c)2025
 * 
 */
 
#include <stdio.h>
#include <stdlib.h>

int main(void){
	int n = 0;
	int magic_square[99][99] = { 0 };
	int y_position = 0; //row
	int x_position = 0; //column
	int prevY_position = 0; 
	int prevX_position = 0; 
	int number = 1;
	
	printf("This program creates a magic square of a specified size.\n");
	printf("The size must be an odd number between 1 and 99.\n");
	printf("Enter size of magic square: ");
	
	while((scanf("%d", &n)) == 0){
		scanf("%*[^\n]");
		printf("Enter size of magic square:");
	}	
	
	if((n % 2) == 0 || n < 1 || n > 99){
		printf("Not an odd number between 1 and 99!\n");	
		exit(EXIT_FAILURE);
	}
	//place 1 in middle of row 0
	y_position = 0;
	x_position = (n/2);
	magic_square[y_position][x_position] = number;
	number++;
	
				
	// fill magic square
	while(number <= (n * n)){
		y_position = y_position - 1;
		x_position = x_position + 1;
		
		if(x_position < 0){
			x_position = n - 1;
		} else if(x_position > (n - 1)){
			x_position = 0;
		} 			
		if(y_position < 0){
			y_position = n - 1;
		} else if (y_position > (n - 1)){
			y_position = 0;
		}	
		if(magic_square[y_position][x_position] == 0){
			magic_square[y_position][x_position] = number;
			number++;	
			prevY_position = y_position;
			prevX_position = x_position;
		} else {
			prevY_position = prevY_position + 1;
			magic_square[prevY_position][prevX_position] = number;
			number++;	
			y_position = prevY_position;
			x_position = prevX_position;				
		}
	}

	// print magic square
	for(int i = 0 ; i < n ; i++){
		printf("\n");
		for(int j = 0 ; j < n ; j++){
			printf("\t%2d ", magic_square[i][j]);
		}
	}
	printf("\n");
	
	return EXIT_SUCCESS;
}

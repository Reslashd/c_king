/*
 * C Programming - A Modern Approach 2nd Edition
 * Chapter 8 Excercises by Reslashd (c)2025
 * 
 */
 
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void){		
	srand((unsigned int)time(NULL));
		
	char array[10][10] = { 0 };
	int i = 0;
	int j = 0;
	int blocked = 0;
	int direction = 0;
	char letter = 'A';
	
	// initialize grid with dots
	for ( i = 0 ; i < 10 ; i++){
		for(j = 0; j < 10 ; j++){
			array[i][j] = '.';
		}
	}		

	// random walk starting position
	i = rand() % (9 + 1);
	j = rand() % (9 + 1);

	array[i][j] = 'A';
	letter += 1;	
	
	
	// walk the grid	
	while(blocked != 1 && letter <= 'Z'){						
		direction = (rand() % 4);	
		
		if((array[i-1][j] != '.') && (array[i+1][j] != '.') && (array[i][j-1] != '.') && (array[i][j+1] != '.')){
			blocked = 1;	
		} else if (direction == 0){
			if((j-1) >= 0 && array[i][j-1] == '.'){				
				j = j-1;		
				array[i][j] = letter;
				letter += 1;
			} else if ((j-1) < 0 && array[i][j+1] != '.' && array[i-1][j] != '.' && array[i+1][j] != '.'){
				blocked = 1;
			}
		} else if (direction == 1){
			if((j+1) < 10 && array[i][j+1] == '.'){				
				j = j+1;		
				array[i][j] = letter;
				letter += 1;
			} else if ((j+1) > 9 && array[i][j-1] != '.' && array[i-1][j] != '.' && array[i+1][j] != '.'){
				blocked =1;
			}
		} else if (direction == 2){
			if((i-1) >= 0 && array[i-1][j] == '.'){
				i = i-1;		
				array[i][j] = letter;
				letter += 1;
			} else if((i-1) < 0 && array[i+1][j] != '.' && array[i][j-1] != '.' && array[i][j+1] != '.'){
				blocked = 1;
			}
		} else if (direction == 3){
			if((i+1) < 10 && array[i+1][j] == '.'){
				i = i+1;		
				array[i][j] = letter;
				letter += 1;	
			} else if((i+1) > 9 && array[i-1][j] != '.' && array[i][j-1] != '.' && array[i][j+1] != '.'){
				blocked = 1;
			} 
		} 			
	}
		
	// print grid
	printf("\n");	
	for (i = 0 ; i < 10 ; i++){					
		for(j = 0 ; j < 10 ; j++){
			printf("%c ", array[i][j]);
		}
		printf("\n");
	}		

	return 0;
}

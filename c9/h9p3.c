/*
 * C Programming - A Modern Approach 2nd Edition
 * Chapter 9 Excercises by Reslashd (c)2025
 * 
 */

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void generate_random_walk(char walk[10][10]);
void print_array(char walk[10][10]);

int main(void){		
	srand((unsigned int)time(NULL));		
	char walk[10][10] = { 0 };
	
	generate_random_walk(walk);
	print_array(walk);

	return 0;
}


void generate_random_walk(char walk[10][10]){
	int i = 0;
	int j = 0;
	int blocked = 0;
	int direction = 0;
	char letter = 'A';

	// initialize grid with dots
	for (int i = 0 ; i < 10 ; i++){
		for(int j = 0; j < 10 ; j++){
			walk[i][j] = '.';
		}
	}		

	// random walk starting position
	i = rand() % (9 + 1);
	j = rand() % (9 + 1);

	walk[i][j] = 'A';
	letter += 1;	
	
	
	// walk the grid	
	while(blocked != 1 && letter <= 'Z'){						
		direction = (rand() % 4);	
		
		if((walk[i-1][j] != '.') && (walk[i+1][j] != '.') && (walk[i][j-1] != '.') && (walk[i][j+1] != '.')){
			blocked = 1;	
		} else if (direction == 0){
			if((j-1) >= 0 && walk[i][j-1] == '.'){				
				j = j-1;		
				walk[i][j] = letter;
				letter += 1;
			} else if ((j-1) < 0 && walk[i][j+1] != '.' && walk[i-1][j] != '.' && walk[i+1][j] != '.'){
				blocked = 1;
			}
		} else if (direction == 1){
			if((j+1) < 10 && walk[i][j+1] == '.'){				
				j = j+1;		
				walk[i][j] = letter;
				letter += 1;
			} else if ((j+1) > 9 && walk[i][j-1] != '.' && walk[i-1][j] != '.' && walk[i+1][j] != '.'){
				blocked =1;
			}
		} else if (direction == 2){
			if((i-1) >= 0 && walk[i-1][j] == '.'){
				i = i-1;		
				walk[i][j] = letter;
				letter += 1;
			} else if((i-1) < 0 && walk[i+1][j] != '.' && walk[i][j-1] != '.' && walk[i][j+1] != '.'){
				blocked = 1;
			}
		} else if (direction == 3){
			if((i+1) < 10 && walk[i+1][j] == '.'){
				i = i+1;		
				walk[i][j] = letter;
				letter += 1;	
			} else if((i+1) > 9 && walk[i-1][j] != '.' && walk[i][j-1] != '.' && walk[i][j+1] != '.'){
				blocked = 1;
			} 
		} 			
	}	
}

void print_array(char walk[10][10]){
	printf("\n");	
	for (int i = 0 ; i < 10 ; i++){					
		for(int j = 0 ; j < 10 ; j++){
			printf("%c ", walk[i][j]);
		}
		printf("\n");
	}	
}

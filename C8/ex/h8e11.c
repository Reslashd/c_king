/*
 * C Programming - A Modern Approach 2nd Edition
 * Chapter 8 Excercises by Reslashd (c)2025
 * 
 */
 
#include <stdio.h>
#include <stdbool.h>

int main(void){					
	char checker_board[8][8];
	
	for(int i = 0 ; i < 8 ; i++){
		for(int j = 0 ; j < 8 ; j++){
			if(((i + j) % 2) == 0){
				checker_board[i][j] = 'B';
			}
			else{
				checker_board[i][j] = 'R';
			}
		}
	}	
	
	for(int i = 0 ; i < 8 ; i++){
		if(i > 0){
			printf("\n");
		}
		for(int j = 0 ; j < 8 ; j++){
			printf("%c ", checker_board[i][j]);
		}
	}
	printf("\n");
	return 0;
}

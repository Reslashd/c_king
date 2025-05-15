/*
 * C Programming - A Modern Approach 2nd Edition
 * Chapter 8 Excercises by Reslashd (c)2025
 * 
 */
 
#include <stdio.h>
#include <stdbool.h>

int main(void){					
	char chess_board[8][8] = {{'r', 'n', 'b', 'q', 'k', 'b', 'n' , 'r'},
							{'p', 'p', 'p', 'p', 'p', 'p', 'p' , 'p'},
							{' ', '.', ' ', '.', ' ', '.', ' ' , '.'},
							{'.', ' ', '.', ' ', '.', ' ', '.' , ' '},
							{' ', '.', ' ', '.', ' ', '.', ' ' , '.'},
							{'.', ' ', '.', ' ', '.', ' ', '.' , ' '},
							{'P', 'P', 'P', 'P', 'P', 'P', 'P' , 'P'},
							{'R', 'N', 'B', 'Q', 'K', 'B', 'N' , 'R'}};
	
	for(int i = 0 ; i < 8 ; i++){
		if(i > 0){
			printf("\n");
		}
		for(int j = 0 ; j < 8 ; j++){
			printf("%c ", chess_board[i][j]);
		}
	}
	printf("\n");
	return 0;
}

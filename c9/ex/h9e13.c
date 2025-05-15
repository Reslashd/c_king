/*
 * C Programming - A Modern Approach 2nd Edition
 * Chapter 9 Excercises by Reslashd (c)2025
 * 
 */
 
#include <stdio.h>

int evaluate_position(char board[8][8]);



int main(void){	
	char board[8][8] = { {'K', 'Q', 'R', 'B', 'N', 'N', 'k', 0 }, {'r', 'r', 'k', 'b', 'n', 0, 'p', 'p' }};	
	int difference = 0;
	
	difference = evaluate_position(board);
	
	if(difference > 0){
		puts("White has the advantage!\n");
	} else if(difference < 0){
		puts("Black has the advantage!\n");
	} else {
		puts("Neither has an advantage!\n");
	}
	return 0;
}

int evaluate_position(char board[8][8]){
	int w = 0;
	int b = 0;
	int difference = 0;
	
	for(int i = 0 ; i < 8 ; i++){
		for(int j = 0;  j < 8 ; j++){
			switch(board[i][j]){
				case 'Q':
				w = w + 9;
				break;
				case 'q': 
				b = b + 9;
				break;
				case 'R':
				w = w + 5;
				break;
				case 'r': 
				b = b + 5;
				break;
				case 'B':
				w = w + 3;
				break;
				case 'b': 
				b = b + 3;
				break;
				case 'N':
				w = w + 3;
				break;
				case 'n': 
				b = b + 3;
				break;
				case 'P':
				w = w + 1;
				break;
				case 'p': 
				b = b + 1;
				break;			
			}				
		}		
	}
	difference = w - b;
	return difference;	
}

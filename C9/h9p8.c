/*
 * C Programming - A Modern Approach 2nd Edition
 * Chapter 9 Excercises by Reslashd (c)2025
 * 
 */
 
#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <time.h>

int roll_dice(void);
bool play_game(void);

int main(void){
	srand((unsigned int)time(NULL));
	bool end_play = 0;
	bool game_result = 0;
	int losses = 0;
	int wins = 0;
	int choice = 0;
	int ch = 0;
	
	while(end_play != 1){
		game_result = play_game();
		if(game_result == 1){
			puts("You win!\n");
			wins++;
		} else if(game_result == 0){
			puts("You lose!\n");
			losses++;
		}
		printf("Play again? ");
		choice = getchar();
		if(choice != 'y' && choice != 'Y'){
			end_play = 1;
		}
		printf("\n");
		while ((ch = getchar()) != '\n' && ch != EOF);
	}
	printf("\nWins: %d\t Losses: %d\n",wins, losses);
	return EXIT_SUCCESS;
}

int roll_dice(void){
	int sum = 0;
	sum = rand() % 6 + 1 + rand() % 6 + 1;
	return sum;
}

bool play_game(void){
	bool first_roll = 1;
	bool game_result = 0;
	bool end_game = 0;
	int point = 0;
	int prev_point = 0;
	
	while(end_game != 1){
		point = roll_dice();
		printf("You rolled: %d\n", point);	
		if((first_roll == 1 && point == 7) || (first_roll == 1 && point == 11)){
			game_result = 1;
			end_game = 1;
		} else if((first_roll == 1 && point == 2) || (first_roll == 1 && point == 3) || (first_roll == 1 && point == 12)){
			game_result = 0;
			end_game = 1;
		} else if((first_roll == 0 && point == prev_point)){
			game_result = 1;
			end_game = 1;
		} else if((first_roll == 0 && point == 7)){
			game_result = 0;
			end_game = 1;	
		} else {
			first_roll = 0;
			printf("Your point is %d\n", point);
			prev_point = point;
		}
	}	
	return game_result;	
}




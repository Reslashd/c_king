/*
 * C Programming - A Modern Approach 2nd Edition
 * Chapter 10 Excercises by Reslashd (c)2025
 * 
 */
 
#include <stdbool.h>   
#include <stdio.h>
#include <stdlib.h>

#define NUM_RANKS 13
#define NUM_SUITS 4
#define NUM_CARDS 5

/* external variables */
int hand[5][2] = { 0 }; 

bool straight, flush, four, three;
int pairs;   /* can be 0, 1, or 2 */

/* prototypes */
void read_cards(void);
void analyze_hand(void);
void print_result(void);
bool card_exists(int rank, int suit, int cards_read);

/**********************************************************
 * main: Calls read_cards, analyze_hand, and print_result *
 *       repeatedly.                                      *
 **********************************************************/
int main(void)
{
  for (;;) {
    read_cards();
    analyze_hand();
    print_result();
  }
}

/**********************************************************
 * read_cards: Reads the cards into the external          *
 *             variables num_in_rank and num_in_suit;     *
 *             checks for bad cards and duplicate cards.  *
 **********************************************************/
void read_cards(void)
{
  int ch, rank_ch, suit_ch;
  int rank, suit;
  bool bad_card;
  int cards_read = 0;

  while (cards_read < NUM_CARDS) {
    bad_card = false;

    printf("Enter a card: ");

    rank_ch = getchar();
    switch (rank_ch) {
      case '0':           exit(EXIT_SUCCESS);
      case '2':           rank = 0; break;
      case '3':           rank = 1; break;
      case '4':           rank = 2; break;
      case '5':           rank = 3; break;
      case '6':           rank = 4; break;
      case '7':           rank = 5; break;
      case '8':           rank = 6; break;
      case '9':           rank = 7; break;
      case 't': case 'T': rank = 8; break;
      case 'j': case 'J': rank = 9; break;
      case 'q': case 'Q': rank = 10; break;
      case 'k': case 'K': rank = 11; break;
      case 'a': case 'A': rank = 12; break;
      default:            bad_card = true;
    }

    suit_ch = getchar();
    switch (suit_ch) {
      case 'c': case 'C': suit = 0; break;
      case 'd': case 'D': suit = 1; break;
      case 'h': case 'H': suit = 2; break;
      case 's': case 'S': suit = 3; break;
      default:            bad_card = true;
    }

    while ((ch = getchar()) != '\n')
      if (ch != ' ') bad_card = true;

    if (bad_card)
      printf("Bad card; ignored.\n");
    else if(card_exists(rank, suit, cards_read))
      printf("Duplicate card; ignored.\n");
    else {
		hand[cards_read][0] = rank; 
		hand[cards_read][1] = suit;
		cards_read++;
    }
  }
}

/**********************************************************
 * analyze_hand: Determines whether the hand contains a   *
 *               straight, a flush, four-of-a-kind,       *
 *               and/or three-of-a-kind; determines the   *
 *               number of pairs; stores the results into *
 *               the external variables straight, flush,  *
 *               four, three, and pairs.                  *
 **********************************************************/
void analyze_hand(void)
{
  int rank, suit;
  int i = 0;
  int lowest = 0;
  int highest = 0;
  int run = 0;

  straight = false;
  flush = true;
  four = false;
  three = false;
  pairs = 0;

  /* check for flush */
  suit = hand[0][1];
  while(i < NUM_CARDS && flush == true){
	  if(hand[i][1] != suit){	
		  flush =  false;
	  }
	  i++; 	  
  }
  
 /* check for straight */
  i = 0;
  rank = hand[0][0];
  lowest = hand[i][0];
  while(i < NUM_CARDS){
	  if(hand[i][0] < lowest){	
		  lowest = hand[i][0];
	  } else if (hand[i][0] > highest){
		  highest = hand[i][0];
	  }
	  i++; 	  
  }
  if(highest - lowest == 4){
	  straight = true;
  } 	
/* check for 4-of-a-kind, 3-of-a-kind, and pairs */
// Solution from answers... but only works if entered in right order? 3s 3c 3h 5s 6s > 3s 5s 3c 3h 6s does not work?
//
  i = 0;
  while (i < NUM_CARDS) {
    rank = hand[i][0];
    run = 0;
    do {
      run++;
      i++;
    } while (i < NUM_CARDS && hand[i][0] == rank);
    switch (run) {
      case 2: pairs++;      break;
      case 3: three = true; break;
      case 4: four = true;  break;
    }
  }
}

/**********************************************************
 * print_result: Prints the classification of the hand,   *
 *               based on the values of the external      *
 *               variables straight, flush, four, three,  *
 *               and pairs.                               *
 **********************************************************/
void print_result(void)
{
  if (straight && flush) printf("Straight flush");
  else if (four)         printf("Four of a kind");
  else if (three &&
           pairs == 1)   printf("Full house");
  else if (flush)        printf("Flush");
  else if (straight)     printf("Straight");
  else if (three)        printf("Three of a kind");
  else if (pairs == 2)   printf("Two pairs");
  else if (pairs == 1)   printf("Pair");
  else                   printf("High card");

  printf("\n\n");
}

/**********************************************************
 * card_exists: Checks if entered card exists in hand	  *
 **********************************************************/
 
bool card_exists(int rank, int suit, int cards_read){
	int i = 0;
	bool exists = 0;
	
	while(i < cards_read && exists != 1){
		if(hand[i][0] == rank && hand[i][1] == suit){
			exists = 1;	
		}
		i++;		
	}
	return exists;
}

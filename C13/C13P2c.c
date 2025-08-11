/*
 * C Programming - A Modern Approach 2nd Edition
 * Chapter 13 Excercises by Reslashd (c)2025
 * 
 */
 
 /*********************************************************
 * From C PROGRAMMING: A MODERN APPROACH, Second Edition *
 * By K. N. King                                         *
 * Copyright (c) 2008, 1996 W. W. Norton & Company, Inc. *
 * All rights reserved.                                  *
 * This program may be freely distributed for class use, *
 * provided that this copyright notice is retained.      *
 *********************************************************/

/* remind.c (Chapter 13, page 294) */
/* Prints a one-year reminder list */
 
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_REMIND 50   /* maximum number of reminders */
#define MSG_LEN 60      /* max length of reminder message */

int read_line(char str[], int n);


int main(void)
{
  char reminders[MAX_REMIND][MSG_LEN+3];
  char day_str[6], msg_str[MSG_LEN+1], time_str[7];
  int day, month, i, j, num_remind = 0, hours = 0, minutes = 0;


  for (;;) {
    if (num_remind == MAX_REMIND) {
      printf("-- No space left --\n");
      break;
    }
	//2c
    printf("Enter month/day, 24-hour time and reminder: ");
    scanf("%2d/%2d", &month, &day);
    if (day == 0 && month == 0){
		break;	
	//2a / 2c		
    } else if(day > 31 || day < 0 || month < 0 || month > 12){	  		
	  printf("Error invalid day or month\n");
	  scanf("%*[^\n]");
	  continue;		   
    }
    //2b
    scanf("%2d:%2d", &hours, &minutes);
    if(hours < 0 || hours > 23 || minutes < 0 || minutes > 60){
	  printf("Error invalid time\n");
	  scanf("%*[^\n]");
	  continue;	
    }
    //2b / 2c
    sprintf(day_str, "%2d/%2d", month, day);
    sprintf(time_str, " %2d:%2d", hours, minutes);
    
    read_line(msg_str, MSG_LEN);

    for (i = 0; i < num_remind; i++)
      if (strcmp(day_str, reminders[i]) < 0)
        break;
    for (j = num_remind; j > i; j--)
      strcpy(reminders[j], reminders[j-1]);

    strcpy(reminders[i], day_str);
    //2b
    strcat(reminders[i], time_str);
    strcat(reminders[i], msg_str);

    num_remind++;
  }

  printf("\nDay\tReminder\n");
  for (i = 0; i < num_remind; i++)
    printf(" %s\n", reminders[i]);

  return EXIT_SUCCESS;
}

int read_line(char str[], int n)
{
  int ch, i = 0;

  while ((ch = getchar()) != '\n')
    if (i < n)
      str[i++] = (char)ch;
  str[i] = '\0';
  return i;
}


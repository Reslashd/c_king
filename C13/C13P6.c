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

/* planet.c (Chapter 13, page 304) */
/* Checks planet names */

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

#define NUM_PLANETS 9

// strcasecmp will not work in windows > would have to use _stricmp, a better way is writing a custom function with tolower() 
// but an alternative solution (when only targetting posix compatible/Windows systems)

#ifdef _WIN32
	#define strcasecmp _stricmp // use _stricmp on Windows systems
#endif


int main(int argc, char *argv[])
{
  const char *planets[] = {"Mercury", "Venus", "Earth",
                     "Mars", "Jupiter", "Saturn",
                     "Uranus", "Neptune", "Pluto"};
  int i, j;

  for (i = 1; i < argc; i++) {
    for (j = 0; j < NUM_PLANETS; j++)
      if (strcasecmp(argv[i], planets[j]) == 0) { 
        printf("%s is planet %d\n", argv[i], j + 1);
        break;
      }
    if (j == NUM_PLANETS)
      printf("%s is not a planet\n", argv[i]);
  }

  return EXIT_SUCCESS;
}


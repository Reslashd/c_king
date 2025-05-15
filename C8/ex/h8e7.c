/*
 * C Programming - A Modern Approach 2nd Edition
 * Chapter 8 Excercises by Reslashd (c)2025
 * 
 */
 
#include <stdio.h>
#include <stdbool.h>

#define  array_size 40

int main(void){					//0, 1 ,2 ,3, 4, 5, 6
	const int segments[10][7] = {{1, 1, 1, 1, 1, 1, 0}, // 0
								{[1] = 1, [2] = 1},  // 1 *								
								{1, 1, 0, 1, 1, 0, 1},  // 2
								{1, 1, 1, 1, 0, 0, 1},  // 3
								{0, 1, 1, 0, 0, 1, 1},  // 4
								{1, 0, 1, 1, 0, 1, 1},  // 5
								{1, 0, 1, 1, 1, 1, 1},  // 6
								{[0] = 1, [1] = 1, [2] = 1},  // 7 *
								{1, 1, 1, 1, 1, 1, 1},  // 8
								{1, 1, 1, 1, 0, 1, 1}};  // 9	
	return 0;
}

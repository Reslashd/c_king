/*
 * C Programming - A Modern Approach 2nd Edition
 * Chapter 3 Excercises by Reslashd (c)2024
 * 
 */
 
#include <stdio.h>

int main(void){
	int netcode, area, number = 0;
	printf("Enter phone number [ (xxx) xxx-xxxx] : ");
	scanf("(%d) %d - %d", &netcode, &area, &number);
	printf("You entered %d.%d.%d\n", netcode, area, number);

	return 0;
}

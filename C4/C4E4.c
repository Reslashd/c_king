/*
 * C Programming - A Modern Approach 2nd Edition
 * Chapter 4 Excercises by Reslashd (c)2024
 * 
 */
 
#include <stdio.h>

int main(void){
	int num = 0;
	int remainder = 0; 
	int nextint = 0;
	int first = 0;
	int second = 0;
	int third = 0; 
	int fourth = 0;
	int fifth = 0;
	
	printf("Enter a number between 0 and 32767: ");
	scanf("%d", &num);
	
	nextint = num / 8;
	remainder = num % 8;
	fifth = remainder;
	
	remainder = nextint % 8;
	nextint = nextint / 8; 
	fourth = remainder;
	
	remainder = nextint % 8;
	nextint = nextint / 8; 
	third = remainder;
	
	remainder = nextint % 8;
	nextint = nextint / 8; ;
	second = remainder;
	
	remainder = nextint % 8;
	nextint = nextint / 8; 
	first = remainder;	
	
	printf("In octal your number is: %d%d%d%d%d", first, second, third, fourth, fifth);
	
	return 0;
}

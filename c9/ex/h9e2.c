/*
 * C Programming - A Modern Approach 2nd Edition
 * Chapter 9 Excercises by Reslashd (c)2025
 * 
 */
 
#include <stdio.h>
#include <stdbool.h>

bool check(int x, int y, int n);

int main(void){
	
	printf("%d", check(1,2,4));
	return 0;
}

bool check(int x, int y, int n){
	bool flag = 0;
	if((x > 0 && x < (n-1)) && (y > 0 && y < (n-1))){
		flag = 1;
	} 
	return flag;
}

/*
 * C Programming - A Modern Approach 2nd Edition
 * Chapter 13 Excercises by Reslashd (c)2025
 * 
 */
 
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int f(char *s, char *t);

int main(void){
	char s[] = { 0 };
	char t[] = { 0 };
	printf("%d\n", f("abcd", "babc"));
	return EXIT_SUCCESS;
}

int f(char *s, char *t){
	char *p1, *p2;
	
	for (p1 = s; *p1; p1++){
		for(p2 = t; *p2; p2++){
			if(*p1 == *p2){
				break;
			}
		}
		if (*p2 == '\0'){
			break;
		}
	}
	return p1 - s;
}

/*
 * C Programming - A Modern Approach 2nd Edition
 * Chapter 7 Excercises by Reslashd (c)2024
 * 
 */
 
#include <stdio.h>

int main(void){

	int h = 0;
	int m = 0;	
	char c1 = 0;
	char c2 = 0;
	char c3 = 0;
		
	printf("Enter a 12-hour time: ");
	scanf("%d:%d", &h, &m);
	scanf("%c", &c1);
	switch(c1){
		case ' ': case 'a': case 'A': case 'p': case 'P':
		scanf("%c", &c2);
		switch(c2){
			case 'a': case 'A': case 'p': case 'P':
			scanf("%c", &c3);
			break;
		}
		break;	
		default:
		printf("Invalid indicator\n");
		return 0;
	}

	if(c1 == 'p' || c1 == 'P' || c2 == 'p' || c2 == 'P'){
		h += 12;
	} else if(c1 == 'a' || c1 == 'A' || c2 == 'a' || c2 == 'A'){
		if(h == 12){
			h = 0;
		}
	}	
	printf("Equivalent 24-hour time: %.2d:%.2d\n", h, m);
	
	return 0;
}

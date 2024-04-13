/*
 * C Programming - A Modern Approach 2nd Edition
 * Chapter 6 Excercises by Reslashd (c)2024
 * 
 */
 
#include <stdio.h>

int main(void){
	int m = 0;
	int n = 0;
	int m_bak = 0;
	int n_bak = 0;
	int remainder = 0;
	
	printf("Enter a fraction: ");
	scanf("%d/%d", &m, &n);
	m_bak = m;
	n_bak = n;

	while(n != 0){
		remainder = m % n;
		m = n;
		n = remainder;
	}	
	printf("In lowest terms: %d/%d\n", m_bak/m, n_bak/m);

	
	return 0;
}

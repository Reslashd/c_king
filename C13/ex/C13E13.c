/*
 * C Programming - A Modern Approach 2nd Edition
 * Chapter 13 Excercises by Reslashd (c)2025
 * 
 */
 
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void build_index_url(const char *domain, char *index_url);

int main(void){
	char domain[50];
	char index_url[50];
	
	strcpy(domain, "knking.com");
	build_index_url(domain, index_url);
	printf("Full url is %s\n", index_url);
	
	return EXIT_SUCCESS;
}

void build_index_url(const char *domain, char *index_url){
	strcpy(index_url, "https://www.");
	strcat(index_url, domain);
	strcat(index_url, "/index.html");
}

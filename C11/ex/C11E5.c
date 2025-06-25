/*
 * C Programming - A Modern Approach 2nd Edition
 * Chapter 11 Excercises by Reslashd (c)2025
 * 
 */
 
#include <stdio.h>
#include <stdlib.h>

void split_time(long total_sec, int *hr, int *min, int *sec);

int main(void){
	long total_sec = 4850;
	int hr = 0;
	int min = 0;
	int sec = 0;
	
	split_time(total_sec, &hr, &min, &sec);
	printf("Time is Hr: %d, Min: %d, Sec: %d\n", hr, min, sec);
	return EXIT_SUCCESS;
}

void split_time(long total_sec, int *hr, int *min, int *sec){
	*hr = (total_sec / 3600);
	*min = (total_sec - (3600 * *hr)) / 60;
	*sec = (total_sec - (3600 * *hr) - (*min * 60));
}

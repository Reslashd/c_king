/*
 * C Programming - A Modern Approach 2nd Edition
 * Chapter 14 Excercises by Reslashd (c)2025
 * 
 */
 
#include <stdio.h>
#include <stdlib.h>

#define M 10
#if M // succeed
#ifdef M //succeed
#ifndef M //fail because M is defined
#if defined(M) //succeed
#if !defined(M) //fail because M is defined

int main(void){	


	return EXIT_SUCCESS;	
}


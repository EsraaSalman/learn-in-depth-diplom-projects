/**************************************************************************************************
 Lecture_8_Assignment
 Name        : ex2.c
 Author      : Esraa_Salman
 Description : Write a program in C to print all the alphabets using a pointer.
 **************************************************************************************************/
#include <stdio.h>
#include <stdlib.h>
/*****************************************************************************************************
 *                                       The main function                                           *
 *****************************************************************************************************/
int main( void )
{
	int count;
	char alphabets[26];
	char *ptr;
	/*Make pointer point to the first character in the array of character*/
	ptr=alphabets;
	printf("The alphabets: ");
	/*Looping to print all the alphabets*/
	for (count=0;count<26;count++)
	{
		*ptr='A'+count;
		printf("%c ",*ptr);
		ptr++;
	}
	return 0;
}

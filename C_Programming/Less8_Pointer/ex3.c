/**************************************************************************************************
 Lecture_8_Assignment
 Name        : ex3.c
 Author      : Esraa_Salman
 Description : Write a program in C to print a string in reverse using a pointer
 **************************************************************************************************/
#include <stdio.h>
#include <stdlib.h>
/*****************************************************************************************************
 *                                       The main function                                           *
 *****************************************************************************************************/
int main( void )
{
	char str [25],*ptr;
	/*Tell user to enter the string*/
	printf("Enter a string: ");
	fflush(stdin);fflush(stdout);
	/*Take the string from user*/
    gets(str);
	/*Make pointer point to the first character in the string*/
    ptr=str;
    while(*ptr!='\0')
    {
    	ptr++;
    }
	/*Displaying the string after reverse*/
	printf("Reverse of the string is : ");
    while(ptr!=str-1)
    {
    	ptr--;
    	printf("%c",*ptr);
    }

	return 0;
}

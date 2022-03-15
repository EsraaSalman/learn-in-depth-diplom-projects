/**************************************************************************************************
 Lecture_8_Assignment
 Name        : ex4.c
 Author      : Esraa_Salman
 Description : Write a c program to add two distances (in inch-feet) system using structure
 **************************************************************************************************/
#include <stdio.h>
#include <stdlib.h>
/***************************************************************************************************
 *                                      Preprocessor Macros                                                        *
 ***************************************************************************************************/
#define size 10
/*****************************************************************************************************
 *                                       The main function                                           *
 *****************************************************************************************************/
int main( void )
{
	int arr[size],count,arr_size,*ptr;
	/*Tell user to enter the size of the array*/
	printf("Enter the size of array within max 10 elements: ");
	fflush(stdin);fflush(stdout);
	/*Take the size from user*/
	scanf("%d",&arr_size);
	/*Tell user to enter the elements of the array*/
	printf("Enter the elements:\n");
	/*Looping to take the elements from user*/
	for(count=0;count<arr_size;count++)
	{
		printf("arr[%d]: ",count);
		fflush(stdin);fflush(stdout);
		scanf("%d",&arr[count]);
	}
	ptr=arr+arr_size-1;
	printf("The array after reverse is: \n");
	/*Looping to print the elements of array after reverse*/
	for(count--;count>=0;count--)
	{
		printf("arr[%d]: %d\n",count,*ptr);
		ptr--;
	}
	return 0;
}


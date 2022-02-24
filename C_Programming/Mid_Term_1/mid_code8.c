/**************************************************************************************************
 Mid_Term_Learn_In_Depth_Diploma
 Name        : mid_code8.c
 Author      : Esraa_Salman
 Description : Write a function to take an array and reverse its elements
 **************************************************************************************************/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/***************************************************************************************************
 *                      Preprocessor Macros                                                        *
 ***************************************************************************************************/
#define size 10
/***************************************************************************************************
 * Description: a function to take an array and reverse its elements
 * Input: an address of array (passing by reference (arr[]) and the array size (arr_size)
 * Output: don't return anything (void function)
 ***************************************************************************************************/
void reverse(int arr[], int arr_size)
{
	int i,temp;
	/*Looping on elements of the array until the half of array*/
	for(i=0;i<arr_size/2;i++)
	{
		/*Save this element in temp variable*/
		temp=arr[i];
		/*Save in this element the opposite of him from the end of the array*/
		arr[i]=arr[arr_size-i-1];
		/*Save in this element opposite temp variable*/
		arr[arr_size-i-1]=temp;
	}
}
/*****************************************************************************************************
 *                                       The main function                                           *
 *****************************************************************************************************/
int main( void )
{
	int arr[size],count,arr_size;
	/*Tell user to enter the size of the array*/
	printf("Enter the size of array within 10 elements: ");
	fflush(stdin);fflush(stdout);
	/*Take the size from user*/
	scanf("%d",&arr_size);
	/*Tell user to enter the elements of the array*/
	printf("Enter array to reversing within 5 elements: ");
	fflush(stdin);fflush(stdout);
	/*Looping to take the elements from user*/
	for(count=0;count<arr_size;count++)
	{
		scanf("%d",&arr[count]);
	}
	/*Calling reverse functions*/
	reverse(arr,arr_size);
	printf("The array after reversing is:");
	/*Looping to print the elements of the array after reversing*/
	for(count=0;count<arr_size;count++)
	{
		printf("%3d",arr[count]);
	}
	return 0;
}


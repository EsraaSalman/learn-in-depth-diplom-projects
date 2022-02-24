/**************************************************************************************************
 Mid_Term_Learn_In_Depth_Diploma
 Name        : mid_code6.c
 Author      : Esraa_Salman
 Description : Write a function to return unique number in array with one loop
 **************************************************************************************************/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/***************************************************************************************************
 *                      Preprocessor Macros                                                        *
 ***************************************************************************************************/
#define size 10
/***************************************************************************************************
 * Description: a function to return unique number in array with one loop and recursion
 * Input: an address of array (passing by reference (arr[]) and index of the element will be checked
 * Output: return the unique element in the array
 ***************************************************************************************************/
int unique_number(int arr[],int num)
{
	int count,not_equal=0,unique;
	/*Looping on element of the array*/
	for(count=0;(count<size)&&(num<size);count++)
	{
		/*Make sure the element don't be compare with itself */
		if(num!=count)
		{
			if( (arr[count]!=arr[num])) /*If not equal*/
			{
				/*Increment not_equal flag by 1*/
				not_equal++;
				/*If not equal flag equal the number of elements of the array without checked element*/
				if((not_equal==size-1))
				{
					/*Make the unique number equal the checked element*/
					unique=arr[num];
					/*Exit from this loop*/
					break;
				}
			}
			else /*If equal*/
			{
				/*Increment index of checked element*/
				num++;
				/*And Repeat calling the function*/
				unique=unique_number(arr,num);
			}
		}
	}
	/*return the unique element in the array*/
	return unique;
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
	printf("Enter the elements: ");
	fflush(stdin);fflush(stdout);
	/*Looping to take the elements from user*/
	for(count=0;count<arr_size;count++)
		{
			scanf("%d",&arr[count]);
		}
	/*Calling reverse functions and print the unique number of the array*/
	printf("The unique number in array is: %d",	unique_number(arr,0));
	return 0;
}

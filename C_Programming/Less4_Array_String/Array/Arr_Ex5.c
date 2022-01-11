/***********************************************************************************************
 *  Learn_in_depth_C_Programmimg_Lecture_4_Ass
 *  Arr_EX_5: Write C Program to search an element in array
 *  Created on: 09/01/2022
 *  Author: Esraa_salman
 **********************************************************************************************/

#include <stdio.h>
#include <stdlib.h>

int main ()
{
	int data, count, num;
	int array[10];

	printf("Enter number of elements : ");
	fflush(stdout);fflush(stdin);
	scanf("%d",&data);
	while( (data<=0) || (data>10) )
	{
		printf("Error!!, number of data should be 1->10\r\n");
		printf("Enter number of data again: ");
		fflush(stdout);fflush(stdin);
		scanf("%d",&data);
	}

	printf("\r\nEnter elements of array :\r\n");
	fflush(stdout);fflush(stdin);

	for(count=0;count<data;count++)
	{
		scanf ("%d",&array[count]);
	}

	printf("Enter the element to be searched : ");
	fflush(stdout);fflush(stdin);
	scanf("%d",&num);

	for(count=0;count<data;count++)
	{
		if(array[count]==num)
		{
			printf("Number found at the location : %d ",count+1);
			break;
		}
	}

	return 0;
}

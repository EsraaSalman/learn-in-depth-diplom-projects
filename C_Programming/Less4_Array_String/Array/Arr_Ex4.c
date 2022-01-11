/***********************************************************************************************
 *  Learn_in_depth_C_Programmimg_Lecture_4_Ass
 *  Arr_EX_4: Write C Program to insert an element in an array
 *  Created on: 09/01/2022
 *  Author: Esraa_salman
 **********************************************************************************************/

#include <stdio.h>
#include <stdlib.h>

#define ROW 2
#define COLUME 2

int main ()
{
	int data, count, num, location;
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

	printf("Enter the number to be inserted : ");
	fflush(stdout);fflush(stdin);
	scanf("%d",&num);

	printf("Enter the location : ");
	fflush(stdout);fflush(stdin);
	scanf("%d",&location);

	for(count=0;count<data;count++)
	{
		if(count==(location-1))
		{
			for (count=data;count>=location;count--)
			{
				array[count]=array[count-1];
			}
			array[location-1]=num;
			break;
		}
	}

	for (count=0;count<data+1;count++)
	{
		printf("%d\t",array[count]);
	}
	return 0;
}

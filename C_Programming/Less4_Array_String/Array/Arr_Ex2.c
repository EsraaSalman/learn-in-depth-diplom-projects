/***********************************************************************************************
 *  Learn_in_depth_C_Programmimg_Lecture_4_Ass
 *  Arr_EX_2: Write C Program to calculate average using array
 *  Created on: 09/01/2022
 *  Author: Esraa_salman
 **********************************************************************************************/
#include <stdio.h>
#include <stdlib.h>

int main ()
{
	int size , count;
	float data[100];
	float sum,average;
	printf("Enter number of data : ");
	fflush(stdout);fflush(stdin);
	scanf("%d",&size);
	while( (size<=0) || (size>100) )
	{
		printf("Error!!, number of data should be 1->100\r\n");
		printf("Enter number of data again: ");
		fflush(stdout);fflush(stdin);
		scanf("%d",&size);
	}
	for(count=0;count<size;count++)
	{
		printf("%d. Enter number: ",count+1);
		fflush(stdout);fflush(stdin);
		scanf ("%f",&data[count]);
		sum+=data[count];
	}
	average=sum/count;
	printf("Average = %.2f",average);

	return 0;
}

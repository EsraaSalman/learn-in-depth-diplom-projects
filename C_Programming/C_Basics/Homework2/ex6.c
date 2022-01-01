/***********************************************************************************************
 *  Learn_in_depth_C_Programmimg_Lecture_3_Ass
 *  ex6.c: Write c program to calculate sum of natural numbers
 *  Created on: 31/12/2021
 *  Author: Esraa_salman
 **********************************************************************************************/

#include <stdio.h>
#include <stdlib.h>

int main()

{
	int num, count, sum=0;
	printf("Enter the integer number : ");
	fflush(stdout);fflush(stdin);
	scanf("%d",&num);

	for(count=0;count<=num;count++)
	{
		sum+=count;
	}
	printf("Sum equal : %d ",sum);

	return 0;
}

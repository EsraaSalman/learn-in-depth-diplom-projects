/***********************************************************************************************
 *  Learn_in_depth_C_Programmimg_Lecture_3_Ass
 *  ex7.c: Write c program to find factorial of a number
 *  Created on: 31/12/2021
 *  Author: Esraa_salman
 **********************************************************************************************/

#include <stdio.h>
#include <stdlib.h>

int main()

{
	int num, count, fact=1;
	printf("Enter the integer number you want his factorial : ");
	fflush(stdout);fflush(stdin);
	scanf("%d",&num);

	if(num>=0)
	{
		for(count=1;count<=num;count++)
		{
			fact*=count;
		}
		printf("\nFactorial of (%d) equal : %d ",num,fact);
	}
	else if (num<0)
	{
		printf("\nError!!! Factorial of (%d) negative number doesn't exist ",num);
	}
	return 0;
}

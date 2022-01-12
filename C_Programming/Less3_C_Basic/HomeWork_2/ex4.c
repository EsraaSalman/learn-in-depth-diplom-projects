/***********************************************************************************************
 *  Learn_in_depth_C_Programmimg_Lecture_3_Ass
 *  ex4.c: Write c program to check whether a number is positive or negative
 *  Created on: 31/12/2021
 *  Author: Esraa_salman
 **********************************************************************************************/

#include <stdio.h>
#include <stdlib.h>

int main()

{
	int num;
	printf("Enter the integer number you want to check : ");
	fflush(stdout);fflush(stdin);
	scanf("%d",&num);

	if(num==0)
		printf("You entered Zero, It is neither positive nor negative");
	else
	{
		if(num>0)
			printf("The integer number you entered (%d) is positive ",num);
		else if (num<0)
			printf("The integer number you entered (%d) is negative  ",num);
	}

	return 0;
}

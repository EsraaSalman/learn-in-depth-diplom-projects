/***********************************************************************************************
 *  Learn_in_depth_C_Programmimg_Lecture_3_Ass
 *  ex1.c: Write c program to check whether a number is even or odd
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

	if(num%2==0)
		printf("The integer number you entered (%d) is even ",num);
	else
		printf("The integer number you entered (%d) is odd  ",num);

	return 0;
}

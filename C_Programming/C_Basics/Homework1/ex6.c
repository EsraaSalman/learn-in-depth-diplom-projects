/***********************************************************************************************
 *  Learn_in_depth_C_Programmimg_Lecture_3_Ass
 *  ex6.c: Write Source Code to Swap Two Numbers
 *  Created on: 31/12/2021
 *  Author: Esraa_salman
 **********************************************************************************************/

#include <stdio.h>
#include <stdlib.h>

int main()

{
	float num1,num2,sum;
	printf("Enter value of num1: ");
	fflush(stdout);fflush(stdin);
	scanf("%f",&num1);
	printf("\nEnter value of num2: ");
	fflush(stdout);fflush(stdin);
	scanf("%f",&num2);

	sum=num1+num2;
	num1=num2;
	num2=sum-num1;
	printf("\nAfter swapping, value of a = %f\nAfter swapping, value of b = %f",num1,num2);
	return 0;
}


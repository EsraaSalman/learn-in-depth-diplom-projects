/***********************************************************************************************
 *  Learn_in_depth_C_Programmimg_Lecture_3_Ass
 *  ex3.c: Write C Program to Add Two Integers
 *  Created on: 31/12/2021
 *  Author: Esraa_salman
 **********************************************************************************************/

#include <stdio.h>
#include <stdlib.h>

int main()

{
	int num1,num2,sum;
	printf("Enter two integers: \n");
	fflush(stdout);fflush(stdin);
	scanf("%d%d",&num1,&num2);
	sum=num1+num2;
	printf("\nSum: %d",sum);
	return 0;
}


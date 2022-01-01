/***********************************************************************************************
 *  Learn_in_depth_C_Programmimg_Lecture_3_Ass
 *  ex4.c: Write C Program to Multiply two Floating Point Numbers
 *  Created on: 31/12/2021
 *  Author: Esraa_salman
 **********************************************************************************************/

#include <stdio.h>
#include <stdlib.h>

int main()

{

	float num1,num2,result;
	printf("Enter two integers: \n");
	fflush(stdout);fflush(stdin);
	scanf("%f%f",&num1,&num2);
	result=num1*num2;
	printf("\nSum: %f",result);
	return 0;
}


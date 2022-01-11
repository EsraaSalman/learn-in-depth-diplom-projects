/***********************************************************************************************
 *  Learn_in_depth_C_Programmimg_Lecture_3_Ass
 *  ex3.c: Write c program to find the largest number among three float numbers
 *  Created on: 31/12/2021
 *  Author: Esraa_salman
 **********************************************************************************************/

#include <stdio.h>
#include <stdlib.h>

int main()

{
	float num1, num2, num3;
	printf("Enter the three float number : ");
	fflush(stdout);fflush(stdin);
	scanf("%f%f%f",&num1,&num2,&num3);

	if( (num1>num2)&&(num1>num3))
		printf("The largest number you entered is %.3f ",num1);
	else if( (num2>num1)&&(num1>num3))
		printf("The largest number you entered is %.3f  ",num2);
	else
		printf("The largest number you entered is %.3f  ",num3);

	return 0;
}

/***********************************************************************************************
 *  Learn_in_depth_C_Programmimg_Lecture_3_Ass
 *  ex7.c: Write Source Code to Swap Two Numbers without temp_variable.
 *  Created on: 31/12/2021
 *  Author: Esraa_salman
 **********************************************************************************************/

#include <stdio.h>
#include <stdlib.h>

int main()

{
	int num1,num2;
	printf("Enter value of num1: ");
	fflush(stdout);fflush(stdin);
	scanf("%d",&num1);
	printf("\nEnter value of num2: ");
	fflush(stdout);fflush(stdin);
	scanf("%d",&num2);

	num1^=num2;
	num2^=num1;
	num1^=num2;
	printf("\nAfter swapping, value of a = %d\nAfter swapping, value of b = %d",num1,num2);
	return 0;
}

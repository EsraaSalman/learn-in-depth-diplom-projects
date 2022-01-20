/***********************************************************************************************
 *  Learn_in_depth_C_Programmimg_Lecture_3_Ass
 *  fun_ex4.c: Write C Program to calculate power of a number by recursion function
 *  Created on: 18/1/2021
 *  Author: Esraa_salman
 **********************************************************************************************/

#include <stdio.h>
#include <stdlib.h>

int power (int base, int pwr)
{
	if(pwr!=0)
	{
		return power(base,--pwr)*base;
	}
	else
		return 1;
}

int main()

{
	int base,pwr,result;
	printf("Enter a base number: ");
	fflush(stdout);fflush(stdin);
	scanf("%d",&base);
	printf("Enter a power number(positive number): ");
	fflush(stdout);fflush(stdin);
	scanf("%d",&pwr);
	if(pwr<0)
	printf("Error!!!, try again with positive power ");
	result=power(base,pwr);
	printf(" %d ^ %d = %d",base,pwr,result);

	return 0;
}

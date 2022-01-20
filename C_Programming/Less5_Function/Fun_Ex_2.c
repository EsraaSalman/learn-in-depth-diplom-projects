/***********************************************************************************************
 *  Learn_in_depth_C_Programmimg_Lecture_3_Ass
 *  fun_ex2.c: Write C Program to calculate factorial by recursion function
 *  Created on: 18/1/2021
 *  Author: Esraa_salman
 **********************************************************************************************/

#include <stdio.h>
#include <stdlib.h>

int fact (int num)
{
	int factorial=1;
	if(num!=0)
	{
	factorial=fact(num-1)*num;
	}
    return factorial;
}

int main()

{
	int num,factorial;
	printf("Enter a positive integer number: ");
	fflush(stdout);fflush(stdin);
	scanf("%d",&num);
	factorial=fact(num);
	printf("Factorial of %d is: %d",num,factorial);

	return 0;
}

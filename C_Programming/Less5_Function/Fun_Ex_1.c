/***********************************************************************************************
 *  Learn_in_depth_C_Programmimg_Lecture_3_Ass
 *  fun_ex1.c: Write C Program to find prime numbers between two intervals by function
 *  Created on: 18/1/2021
 *  Author: Esraa_salman
 **********************************************************************************************/
#include <stdio.h>
#include <stdlib.h>

 int prime (int num)
{
	int count;
	for(count=2;count<=num/2;count++)
	{
		if(num%count==0)
		{
			return 0;
		}
	}
	return 1;
}
int main()

{
	int num1,num2,count,prm;
	printf("Enter two numbers (your interval): ");
	fflush(stdout);fflush(stdin);
	scanf("%d%d",&num1,&num2);
	printf ("Prime numbers between %d and %d are: ",num1,num2);
	for(count=num1;count<=num2;count++)
	{
	  prm=prime(count);
	  if(prm==1)
	  printf("%d ",count);

	}

	return 0;
}

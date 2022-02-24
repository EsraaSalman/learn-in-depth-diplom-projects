/**************************************************************************************************
 Mid_Term_Learn_In_Depth_Diploma
 Name        : mid_code7.c
 Author      : Esraa_Salman
 Description : Write a function to sum numbers from 1 to 100(without loop)
 **************************************************************************************************/
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
/***************************************************************************************************
 * Description: a function to sum numbers from 1 to 100 by recursion method
 * Input: a number from user (num)
 * Output: return the sum number from 1 to 100
 ***************************************************************************************************/
int sum_of (int num)
{
	int sum=0;
	/*If the num greater than zero*/
	if(num>0)
	{
		/*Repeat calling the function*/
	sum=num+sum_of(num-1);
	}
	/*return the sum number from 1 to 100*/
	return sum;
}
/*****************************************************************************************************
 *                                       The main function                                           *
 *****************************************************************************************************/
int main( void )
{
	int sum=0;
	/*Calling sum_of functions and save the return value in sum*/
	sum=sum_of(100);
	/*Print the result of the sum numbers from 1 to 100*/
	printf("sum of the first 100 integer numbers equals : %d\n",sum);
	return 0;
}

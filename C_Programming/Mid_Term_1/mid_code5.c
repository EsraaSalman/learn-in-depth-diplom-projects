/**************************************************************************************************
 Mid_Term_Learn_In_Depth_Diploma
 Name        : mid_code5.c
 Author      : Esraa_Salman
 Description : Write a function to count number of ones in binary number(32_bits)
 **************************************************************************************************/
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
/***************************************************************************************************
 * Description: a function to count number of ones in binary number(32_bits)
 * Input: a number from user (num)
 * Output: return the result of number of ones (ones)
 ***************************************************************************************************/
int count_ones (int num)
{
	int count,ones=0;
	/*Masking variable*/
	int mask=0x80000000;
	/*Looping on binary digits of number*/
	for(count=0;count<32;count++)
	{
		/*If the digits equals one*/
		if ( (num<<count) &mask )
			/*Increment number of ones by 1*/
			ones++;
	}
	/*Return number of ones*/
	return ones;
}
/*****************************************************************************************************
 *                                       The main function                                           *
 *****************************************************************************************************/
int main( void )
{
	int num,ones;
	/*Tell user to enter a number*/
	printf("Enter the positive number: ");
	fflush(stdin);fflush(stdout);
	/*Take a number from user*/
	scanf("%d",&num);
	/*Calling count_ones functions and save the return value in ones */
	ones=count_ones(num);
	/*Displaying the result of the number of ones in the number*/
	printf("The number of ones in %d is: %d",num,ones);
	return 0;
}


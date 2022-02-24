/**************************************************************************************************
 Mid_Term_Learn_In_Depth_Diploma
 Name        : mid_code10.c
 Author      : Esraa_Salman
 Description : Write a function to count the max number of ones between two zeros (number32 bits)
 **************************************************************************************************/
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
/***************************************************************************************************
 * Description: a function to count the max number of ones between two zeros (number32 bits)
 * Input: a number from user (num)
 * Output: return the max number of ones between two zeros
 ***************************************************************************************************/
int max_ones (int num)
{
	int count,ones=0,max=0;
	/*Masking variable*/
	int mask=0x80000000;
	/*The outer for: looping on binary digits of number*/
	for(count=0 ; count<32 ; count++)
	{
		/*If the digits equals zero*/
		if ( !( (num<<count) &mask) )
		{
			/*The inner for: start counting the ones*/
			for(count++ ; ((num<<count) &mask) && (count<32); count++)
			{
				/*Increment number of ones by 1*/
				ones++;
			}
            /*If number of ones between these zeros greater than max*/
			if( (ones>max) && (count<32) )
			{
				/*Make max equal number of ones between these zeros*/
				max=ones;
				/*And make number of ones equal zero to initialize for next iteration of outer for*/
				ones=0;
			}
			/*Decrement the counter of looping by 1 to repeat the last iteration of inner
			 * for (got false condition means this digit equals zero) to achieve the
			 * condition of the outer loop and counting again   */
			count--;
		}
	}
	/*return the max number of ones between two zeros*/
	return max;
}
/*****************************************************************************************************
 *                                       The main function                                           *
 *****************************************************************************************************/
int main( void )
{
	int num,max;
	/*Tell user to enter a number*/
	printf("Enter the number: ");
	fflush(stdin);fflush(stdout);
	/*Take a number from user*/
	scanf("%d",&num);
	/*Calling max_ones functions and save the return value in max*/
	max=max_ones(num);
	/*Print the result of the max number of ones between two zeros*/
	printf("The max number of ones between two zeros is: %d",max);
	return 0;
}

/**************************************************************************************************
 Mid_Term_Learn_In_Depth_Diploma
 Name        : mid_code3.c
 Author      : Esraa_Salman
 Description : Write a function to print all prime numbers between two numbers
 **************************************************************************************************/

#include <stdio.h>
#include <stdlib.h>
#include <math.h>
/***************************************************************************************************
 * Description: a function to print all prime numbers between two numbers
 * Input: two numbers from user (num1),(num2)
 * Output: return the prime numbers between these numbers
 ***************************************************************************************************/
void prime (int num1, int num2)
{
	int i,j,not_prime=0;
	/*Display Two numbers taken from user*/
	printf("The prime numbers between %d and %d are:\n",num1,num2);
	/*The outer loop: looping on numbers from (num1) to (num2)*/
	for(i=num1;i<=num2;i++)
	{
		/*The inner loop: check each number is prime or not*/
		for (j=2;j<=(i/2);j++)
		{
			/*If the number divides accepted by any number from 2 to half of the number */
			if(i%j==0)
			{
				/*Make flag not_prime equals 1 that mean this number is not prime*/
				not_prime=1;
				/*Exit from this loop*/
				break;
			}
		}
		/*If the flag not_prime equals zero that mean this number is prime */
		if(not_prime==0)
		{
			/*Print this prime number*/
			printf("%d ",i);
		}
		/*If the flag not_prime equals one that mean this number is not prime */
		else
		{
			/*Make this flag equal zero to initialize for next iteration*/
			not_prime=0;
		}
	}
}
/*****************************************************************************************************
 *                                       The main function                                           *
 *****************************************************************************************************/
int main( void )
{
	int num1,num2;
	/*Tell user to enter two numbers*/
	printf("Enter the two numbers : ");
	fflush(stdin);fflush(stdout);
	/*Take two numbers from user*/
	scanf("%d%d",&num1,&num2);
	/*Calling prime functions*/
	prime(num1,num2);
	return 0;
}


/**************************************************************************************************
 Mid_Term_Learn_In_Depth_Diploma
 Name        : mid_code1.c
 Author      : Esraa_Salman
 Description : Write a function to take a number and sum all digits
 **************************************************************************************************/
#include <stdio.h>
#include <stdlib.h>
/***************************************************************************************************
 * Description: a function to take a number and sum all digits
 * Input: a number from user (num)
 * Output: return the result of summation of all digits (sum)
 ***************************************************************************************************/
int sum_digits (int num)
{
	int reminder,sum=0;
	/*Looping until the number equals zero that meaning we get all digits of the number*/
	while(num!=0)
	{
		/*To get the first digit at the number*/
		reminder=num%10;
		/*An equation to sum digits, every iteration add the digit you have get*/
		sum+=+reminder;
		/*Divide the number into 10 to get it without the digit I have got in this iteration*/
		num/=10;
	}
	/*Return the result of summation*/
	return sum;
}
/*****************************************************************************************************
 *                                       The main function                                           *
 *****************************************************************************************************/
int main( void )
{
	int num,sum=0;
	/*Tell user to enter a number to sum all digits*/
	printf("Enter positive number: ");
	fflush(stdin);fflush(stdout);
	/*Take a number from user*/
	scanf("%d",&num);
	/*Calling sum_digits functions and save the return value in sum*/
	sum=sum_digits(num);
	/*Displaying the result of summation*/
	printf("The sum of digits is: %d\n",sum);
	return 0;
}


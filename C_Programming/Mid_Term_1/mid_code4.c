/**************************************************************************************************
 Mid_Term_Learn_In_Depth_Diploma
 Name        : mid_code4.c
 Author      : Esraa_Salman
 Description : Write a function to reverse digits in number
 **************************************************************************************************/
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
/***************************************************************************************************
 * Description: a function to to reverse digits in number
 * Input: a number from user (num)
 * Output: return the result of reversing (reverse)
 ***************************************************************************************************/
int reverse_digits (int num)
{
	int reminder,reverse=0;
	/*Looping until the number equals zero that meaning we handle all digits of the number*/
	while(num!=0)
	{
		/*To get the first digit at the number*/
		reminder=num%10;
		/*An equation to reversing, every iteration add the digit to the last saved multiplied by 10*/
		reverse=(reverse*10)+reminder;
		/*Divide the number into 10 to get it without the digit I have got in this iteration*/
		num/=10;
	}
	/*Return the result of reversing*/
	return reverse;
}
/*****************************************************************************************************
 *                                       The main function                                           *
 *****************************************************************************************************/
int main( void )
{
	int num,reverse;
	/*Tell user to enter a number to sum all digits*/
	printf("Enter positive number: ");
	fflush(stdin);fflush(stdout);
	/*Take a number from user*/
	scanf("%d",&num);
	/*Calling reverse_digits functions and save the return value in reverse*/
	reverse=reverse_digits(num);
	/*Displaying the result of reversing*/
	printf("The reverse of %d is: %d\n",num,reverse);
	return 0;
}

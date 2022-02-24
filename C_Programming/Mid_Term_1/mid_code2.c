/**************************************************************************************************
 Mid_Term_Learn_In_Depth_Diploma
 Name        : mid_code2.c
 Author      : Esraa_Salman
 Description : Write a function to take an integer number and calculate it's square root
 **************************************************************************************************/
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
/***************************************************************************************************
 *                      Preprocessor Macros                                                        *
 ***************************************************************************************************/
#define Fail 1
/***************************************************************************************************
 * Description: a function to calculate a square root of perfect square number
 * Input: a number from user (num)
 * Output: return the square root of the number or Fail(1) if isn't perfect square number
 ***************************************************************************************************/
float perfect_square_root(int num)
{
	int count, root=0;
	/*Looping on number from 1 to the half of the number*/
	for(count=1;count<=num/2;count++)
	{
		/*If found an number equal the the number by multiplied it by it self*/
		if( (count*count) ==num)
		{
			/*Make the root equals this number*/
			root=count;
			/*Exit from this loop*/
			break;
		}
		/*If found not equal*/
		else
		{
			/*Make root =error (1) mean that is not perfect square number*/
			root=Fail;
		}
	}
	return root;
}
/***************************************************************************************************
 * Description: a function to take an integer number and calculate it's square root
 * Input: a number from user (num) and the required accuracy (decimal_digits)
 * Output: return the square root of the number
 ***************************************************************************************************/
float square_root(unsigned int num, unsigned int decimal_digits)
{
	int count;
	float b_root=0,a_root=0;
	/*The size of root equal to double to if decimal_digits=6 be enough to round*/
	double root=0;
	/*Increment variable initialized by 0.1*/
	double decimal=0.1;

	/*Looping to get the multiplier number for decimal digits accuracy*/
	for(count=decimal_digits-1;count>0;count--)
		decimal_digits*=10;

	/*If the number equal 0 or 1 the root will equal to the number*/
	if( (num==0) || (num==1))
	{
		return num;
	}
	/*if for any other number*/
	else
	{
		/*Calling perfect_square_root function to check if it is perfect square and return his root*/
		root=perfect_square_root(num);
		/*If the number is not perfect square*/
		if(root==Fail)
		{
			/*Looping until get the first perfect square number before it*/
			for(count=num-1;  ;count--)
			{
				/*Get the root of the perfect square number before it */
				b_root=perfect_square_root(count);
				/*Then flag to exit after got the root*/
				if(b_root!=Fail)
					break;
			}
			/*Looping until get the first perfect square number after it*/
			for(count=num+1;  ;count++)
			{
				/*Get the root of the perfect square number after it */
				a_root=perfect_square_root(count);
				/*Then flag to exit after got the root*/
				if(a_root!=Fail)
					break;
			}
			/*Looping to find the real number between these two values (the root of number)*/
			for(root=b_root+decimal ; (root*decimal_digits)<(a_root*decimal_digits) ; root+=decimal)
			{
				/*If the square of this real value greater than the number*/
				if( ((unsigned int)((root*root)*decimal_digits)) >  (num*decimal_digits) )
				{
					/*Remove the last step or iteration action*/
					root-=decimal;
					/*increment accuracy the increment variable by dividing it  by 10*/
					decimal/=10;
				}
				/*If the square of this real value equal to the number*/
				else if( ((unsigned int)((root*root)*decimal_digits)) == (num*decimal_digits) )
				{
					/*Exit from this loop*/
					break;
				}
			}
		}

	}
	/*Return the root value*/
	return root;
}
/*****************************************************************************************************
 *                                       The main function                                           *
 *****************************************************************************************************/
int main( void )
{
	unsigned int num,decimal_digits;
	float root;
	/*Tell user to enter a number*/
	printf("Enter positive number: ");
	fflush(stdin);fflush(stdout);
	/*Take a number from user*/
	scanf("%d",&num);
	/*Tell user to enter a required accuracy decimal digits*/
	printf("Enter The accuracy decimal digits number within 1 to 6:");
	fflush(stdin);fflush(stdout);
	/*Take a number of decimal digits from user*/
	scanf("%d",&decimal_digits);
	/*Calling square _root function and save the return value in root*/
	root=square_root(num,decimal_digits);
	/*Print the result of the square root of the number*/
	printf("The square root of %d is: %f\n",num,root);

	return 0;
}

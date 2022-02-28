/**************************************************************************************************
 Lecture_6_Assignment
 Name        : ex3.c
 Author      : Esraa_Salman
 Description : Write a c program to add to complex numbers by passing structure to function
 **************************************************************************************************/
#include <stdio.h>
#include <stdlib.h>
/***************************************************************************************************
 * Structure_Name: Complex_Number
 * Description: content a real and imaginary part of a complex number
 ***************************************************************************************************/
struct Complex_Number
{
	float real;
	float imaginary;
};
/***************************************************************************************************
 * Description: a function to add two complex numbers
 * Input: A two structure type of Complex_Number
 * Output: return structure type of Complex_Number
 ***************************************************************************************************/
struct Complex_Number addition(struct Complex_Number s_num1,struct Complex_Number s_num2)
{
	struct Complex_Number s_sum;
	s_sum.real=s_num1.real+s_num2.real;
	s_sum.imaginary=s_num1.imaginary+s_num2.imaginary;
	return s_sum;
}
/*****************************************************************************************************
 *                                       The main function                                           *
 *****************************************************************************************************/
int main( void )
{
	struct Complex_Number s_num1,s_num2,s_sum;
	/*Tell user to enter the two complex numbers*/
	printf("Enter a real and imaginary part of first number respectively: ");
	fflush(stdin);fflush(stdout);
	/*Take the first complex number from user*/
	scanf("%f%f",&s_num1.real,&s_num1.imaginary);
	printf("Enter a real and imaginary part of second number respectively: ");
	fflush(stdin);fflush(stdout);
	/*Take the second complex number from user*/
	scanf("%f%f",&s_num2.real,&s_num2.imaginary);
	/*Calling a function to addition*/
	s_sum=addition(s_num1,s_num2);
	/*Displaying the result of summation*/
	printf("Displaying the result of summation: sum=%.2f+%.2fi",s_sum.real,s_sum.imaginary);
	return 0;
}

/**************************************************************************************************
 Lecture_6_Assignment
 Name        : ex5.c
 Author      : Esraa_Salman
 Description : Write a c program to find area of a circle by macros
 **************************************************************************************************/
#include <stdio.h>
#include <stdlib.h>
/***************************************************************************************************
 *                                      Preprocessor Macros                                        *
 ***************************************************************************************************/
#define pi 3.14
#define area(reduis) pi*radius*radius
/*****************************************************************************************************
 *                                       The main function                                           *
 *****************************************************************************************************/
int main( void )
{
	float radius,area;
	/*Tell user to enter the radius of a circle*/
	printf("Enter the radius of the circle: ");
	fflush(stdin);fflush(stdout);
	scanf("%f",&radius);
	area=area(radius);
	printf("Area of the circle= %.2f",area);
	return 0;
}

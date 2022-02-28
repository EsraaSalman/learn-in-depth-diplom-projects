/**************************************************************************************************
 Lecture_6_Assignment
 Name        : ex2.c
 Author      : Esraa_Salman
 Description : Write a c program to add two distances (in inch-feet) system using structure
 **************************************************************************************************/
#include <stdio.h>
#include <stdlib.h>
/***************************************************************************************************
 * Structure_Name: distance
 * Description: content a foot and inch scale of a distance
 ***************************************************************************************************/
struct distance
{
	float foot;
	float inch;
};
/***************************************************************************************************
 * Description: a function to add two distances
 * Input: A two structure type of distance
 * Output: return structure type of distance
 ***************************************************************************************************/
struct distance  summition_distance (struct distance s_distance1,struct distance s_distance2)
{
	struct distance s_result;
	int foot_inch;
	s_result.foot=s_distance1.foot+s_distance1.foot;
	foot_inch=((int)(s_result.foot*100))%100;
	s_result.inch=s_distance2.inch+s_distance2.inch+(foot_inch/12);
	if(s_result.inch>12)
	{
		s_result.foot++;
		s_result.inch-=12;
	}
	return s_result;
}
/*****************************************************************************************************
 *                                       The main function                                           *
 *****************************************************************************************************/
int main( void )
{
	struct distance s_distance1, s_distance2, s_result;
	/*Tell user to enter the two distances*/
	printf("Enter a foot scale and inch scale of first distance respectively: ");
	fflush(stdin);fflush(stdout);
	/*Take the first complex number from user*/
	scanf("%f%f",&s_distance1.foot,&s_distance1.inch);
	printf("Enter a foot scale and inch scale of second distance respectively: ");
	fflush(stdin);fflush(stdout);
	/*Take the second complex number from user*/
	scanf("%f%f",&s_distance2.foot,&s_distance2.inch);
	/*Calling a function to addition*/
	s_result=summition_distance(s_distance1,s_distance2);
	/*Displaying the result of summation*/
	printf("Displaying the result of summation: "
			"sum=%d,%d(foot,inch)",(int)s_result.foot,(int)s_result.inch);
	return 0;
}

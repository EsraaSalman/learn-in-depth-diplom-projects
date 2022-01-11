/*****************************************************************************************************
 *  Learn_in_depth_C_Programmimg_Lecture_4_Ass
 *  Arr_EX_1: Write C Program to find sum of two matrix of order 2*2 using multidimensional array
 *  Created on: 09/01/2022
 *  Author: Esraa_salman
 ****************************************************************************************************/

#include <stdio.h>
#include <stdlib.h>

#define ROW 2
#define COLUME 2
int main ()
{
	float a[ROW][COLUME], b[ROW][COLUME], sum[ROW][COLUME];
	int row , col;
	printf("Enter the elements of 1st Matrix \r\n");
	for(row=0;row<ROW;row++)
	{
		for(col=0;col<COLUME;col++)
		{
			printf("Enter a[%d][%d]:",row+1,col+1);
			fflush(stdout); fflush(stdin);
			scanf("%f",&a[row][col]);
		}
	}
	printf("\r\nEnter the elements of 2nd Matrix \r\n");
	for(row=0;row<ROW;row++)
	{
		for(col=0;col<COLUME;col++)
		{
			printf("Enter b[%d][%d]:",row+1,col+1);
			fflush(stdout); fflush(stdin);
			scanf("%f",&b[row][col]);
		}
	}
	printf("\r\nSum Of Matrix :\r\n");
	for(row=0;row<ROW;row++)
	{
		for(col=0;col<COLUME;col++)
		{
			sum[row][col] = a[row][col] +  b[row][col];
			printf("%.1f \t",sum[row][col]);
		}
		printf("\r\n");
	}
	return 0;
}

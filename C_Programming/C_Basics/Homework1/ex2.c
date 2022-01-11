/***********************************************************************************************
 *  Learn_in_depth_C_Programmimg_Lecture_3_Ass
 *  ex2.c: Write C Program to Print a Integer Entered by a User
 *  Created on: 31/12/2021
 *  Author: Esraa_salman
 **********************************************************************************************/

#include <stdio.h>
#include <stdlib.h>

int main()

{
	int x;
	printf("Enter a integer: ");
	fflush(stdout);fflush(stdin);
	scanf("%d",&x);
	printf("\nYou entered: %d",x);

	return 0;
}

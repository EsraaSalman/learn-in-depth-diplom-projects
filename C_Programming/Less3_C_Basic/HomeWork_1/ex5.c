/***********************************************************************************************
 *  Learn_in_depth_C_Programmimg_Lecture_3_Ass
 *  ex5.c: Write C Program to Find ASCII Value of a Character
 *  Created on: 31/12/2021
 *  Author: Esraa_salman
 **********************************************************************************************/

#include <stdio.h>
#include <stdlib.h>

int main()

{
	char character;
	printf("Enter a character: ");
	fflush(stdout);fflush(stdin);
	scanf("%c",&character);
	printf("\nASCII value of G = %d",character);
	return 0;
}


/***********************************************************************************************
 *  Learn_in_depth_C_Programmimg_Lecture_3_Ass
 *  ex5.c: Write c program to check whether a character is alphabet or not
 *  Created on: 31/12/2021
 *  Author: Esraa_salman
 **********************************************************************************************/

#include <stdio.h>
#include <stdlib.h>

int main()

{
	char character;
	printf("Enter the character you want to check : ");
	fflush(stdout);fflush(stdin);
	scanf("%c",&character);

	if(((character>64)&&(character<91))||((character>96)&&(character<123)))
		printf("The character you entered (%c) is an alphabet ",character);
	else
		printf("The character you entered (%c) is not an alphabet  ",character);

	return 0;
}

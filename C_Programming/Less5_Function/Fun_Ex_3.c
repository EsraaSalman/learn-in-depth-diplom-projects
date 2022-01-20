/***********************************************************************************************
 *  Learn_in_depth_C_Programmimg_Lecture_3_Ass
 *  fun_ex3.c: Write C Program to reverse sentence using recursion
 *  Created on: 18/1/2021
 *  Author: Esraa_salman
 **********************************************************************************************/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void rev (char sentence[],int size)
{
	if(size>=0)
	{
	printf ("%c",sentence[size]);
	rev (sentence, --size);
	}
}


int main()

{
	char sentence [20];
	int size;
	printf("Enter a sentence within range 19 character: ");
	fflush(stdout);fflush(stdin);
	gets(sentence);
	size=strlen(sentence);
	if(size>19)
	printf("Error!!!, try again ");
	else
	rev (sentence,size);

	return 0;
}



/*****************************************************************************************************
 *  Learn_in_depth_C_Programmimg_Lecture_4_Ass
 *  Str_EX_2: Write C Program to find the length of a string
 *  Created on: 09/01/2022
 *  Author: Esraa_salman
 ****************************************************************************************************/

#include <stdio.h>
#include <stdlib.h>

int main ()
{
	char string [100] ;
	int count=0 , length=0 ;

	printf ("Enter a string : ");
	fflush(stdout);fflush(stdin);
    gets(string);

    while(string[count]!='\0')
    {
    	length++;
    	count++;
    }
    printf ("Length of string equal : %d ",length);

	return 0;
}

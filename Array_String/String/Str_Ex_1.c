/*****************************************************************************************************
 *  Learn_in_depth_C_Programmimg_Lecture_4_Ass
 *  Str_EX_1: Write C Program to find the frequency of character in string
 *  Created on: 09/01/2022
 *  Author: Esraa_salman
 ****************************************************************************************************/

#include <stdio.h>
#include <stdlib.h>

int main ()
{
	char string [100] , character;
	int count=0 , frequency=0 ;

	printf ("Enter a string : ");
	fflush(stdout);fflush(stdin);
    gets(string);

	printf ("Enter a character to find frequency : ");
	fflush(stdout);fflush(stdin);
    scanf("%c",&character);

    while(string[count]!='\0')
    {
    	if(string[count]==character)
    	{
    		frequency++;
    	}
    	count++;
    }
    printf ("Frequency of %c equal : %d ",character,frequency);

	return 0;
}

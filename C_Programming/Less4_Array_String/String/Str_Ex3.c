/*****************************************************************************************************
 *  Learn_in_depth_C_Programmimg_Lecture_4_Ass
 *  Str_EX_3: Write C Program to reverse string without using library function
 *  Created on: 09/01/2022
 *  Author: Esraa_salman
 ****************************************************************************************************/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main ()
{
	int x;

	printf ("Enter a size: ");
	fflush(stdout);fflush(stdin);
    scanf("%d",&x);
	printf ("%d ",x);

	char string [x] , reverse [x] ;
	int count=0 , length=0 ;



	printf ("Enter a string : ");
	fflush(stdout);fflush(stdin);
    gets(string);

    length=strlen(string);

    while(count <=length)
    {
        reverse[count]=string[length-count-1];
        count++;
    }
    reverse[count]='\0';

    printf ("Reverse string is : %s ",reverse);

	return 0;
}

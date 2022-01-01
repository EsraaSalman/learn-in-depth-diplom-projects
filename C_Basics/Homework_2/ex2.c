/***********************************************************************************************
 *  Learn_in_depth_C_Programmimg_Lecture_3_Ass
 *  ex2.c: Write c program to check vowel or consonant
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

	if (( character>96 ) && ( character<123 ))
	{
		if((character=='a')||(character=='e')||(character=='i')||(character=='u')||(character=='o'))
			printf("The character you entered (%c) is vowel \n",character);
		else
			printf("The character you entered (%c) is consonant \n ",character);
	}
	else if(( character>64 ) && ( character<91 ))
	{
		if((character=='A')||(character=='E')||(character=='I')||(character=='U')||(character=='O'))
			printf("The character you entered (%c) is vowel \n",character);
		else
			printf("The character you entered (%c) is consonant \n ",character);
	}
	else
	{
		printf("Error, you didn't enter right character try again");
	}

	return 0;
}

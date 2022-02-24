/**************************************************************************************************
 Mid_Term_Learn_In_Depth_Diploma
 Name        : mid_code9.c
 Author      : Esraa_Salman
 Description : Write a function to reverse words in string
 **************************************************************************************************/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/***************************************************************************************************
 *                      Preprocessor Macros                                                        *
 ***************************************************************************************************/
#define size_str 100
#define size_word 20
/***************************************************************************************************
 * Description: a function to reverse words in string
 * The idea is that depending on the number of spaces between words in the sentence to reverse it,
 *  we need to replace every two adjacent words the number of spaces and repeat that action also
 *  the number of spaces with every iteration decrement the words that will be swapping by one
 * ex: esraa mohamed mostafa //space=2//swap=space=2
 *    mohamed esraa mostafa //space=2//swap=2
 *    mohamed mostafa esraa //space=2//swap=1
 *    mostafa mohamed esraa //space=1//swap=1
 * Input: an address of strings (passing by reference (str[])
 * Output: don't return anything (void function)
 ***************************************************************************************************/
void reverse_words(char str[])
{
	int count,space=0,swap=0,end,i,j;
	char temp[size_word];
	/*Looping on the string to counting number of spaces between words*/
	for(count=0;str[count]!='\0';count++)
	{
		if(str[count]==' ')
			/*Increment number of spaces by one*/
			++space;
	}
	/*The outer loop: looping on string to do swapping between words*/
	for(;space>0;--space)
	{
		/*Initialized counter by zero*/
		count=0;
		/*The inner looping for how many swapping should do*/
		for(swap=space;swap>0;swap--)
		{
			/*Loop to save the first word at swapping in temp string*/
			for(i=count,j=0;(str[i]!=' ')&&(str[i]!='\0');i++,j++)
			{
				temp[j]=str[i];
			}
			temp[j]=' ';
             /*Loop to copy the second word at swapping instead of the first word*/
			for(j=++i,i=count;(str[j]!='\0')&&(str[j]!=' ');j++,i++)
			{
				str[i]=str[j];
			}
			str[i]=' ';
			i++;
			/*Block for check if counter reach to the last word*/
			{
				/*if reached save this value of counter in end variable*/
			if(str[j]=='\0')
				end=j;
			/*Else counter will equal to index of the first character at the second string in this swapping*/
			else
				count=i;
			}
            /*Loop to copy the first word at swapping instead of the second word*/
			for(j=0;temp[j]!=' ';j++,i++)
			{
				str[i]=temp[j];
			}
			str[i]=' ';
		}
	}
	/*End the string after finish reverse words*/
	str[end]='\0';
}
/*****************************************************************************************************
 *                                       The main function                                           *
 *****************************************************************************************************/
int main( void )
{
	char str [size_str];
	/*Tell user to enter the string*/
	printf("Enter string at least two words: ");
	fflush(stdin);fflush(stdout);
	/*Take the elements from user*/
	gets(str);
	/*Calling reverse functions*/
	reverse_words(str);
	/*Print the string after reversing words*/
	printf("The string after reverse words is: %s\n",str);

	return 0;
}

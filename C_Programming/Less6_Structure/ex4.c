/**************************************************************************************************
 Lecture_6_Assignment
 Name        : ex4.c
 Author      : Esraa_Salman
 Description : Write a c program to store information of a students using Array of structures
 **************************************************************************************************/
#include <stdio.h>
#include <stdlib.h>
/***************************************************************************************************
 *                                      Preprocessor Macros                                        *
 ***************************************************************************************************/
#define size 10
/***************************************************************************************************
 * Structure_Name: Student_Informations
 * Description: a structure to store information of a student
 ***************************************************************************************************/
struct Student_Informations
{
	char name[25];
	float marks;
};
/*****************************************************************************************************
 *                                       The main function                                           *
 *****************************************************************************************************/
int main( void )
{
	struct Student_Informations s_studennt[size];
	int count;
	/*Tell user to enter the information of students*/
	printf("Enter the information of students:\n\r");
	/*Looping to take informations for all students*/
	for(count=0;count<size;count++)
	{
		printf("For roll number[%d]\n",count+1);
		printf("Enter the name: ");
		fflush(stdin);fflush(stdout);
		/*Take the name from user*/
		scanf("%s",s_studennt[count].name);
		printf("Enter the marks: ");
		fflush(stdin);fflush(stdout);
		/*Take the marks*/
		scanf("%f",&s_studennt[count].marks);
		printf("\n\r");
	}
	printf("Displaying the informations of students:\n\r");
	/*Looping to display the informations of the student*/
	for(count=0;count<size;count++)
	{
	printf( "Information of roll number[%d]\n"
			"Name: %s\n"
			"Marks: %.2f\n\r",count+1,s_studennt[count].name,s_studennt[count].marks);
	}
	return 0;
}

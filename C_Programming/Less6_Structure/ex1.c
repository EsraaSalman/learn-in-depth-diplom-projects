/**************************************************************************************************
 Lecture_6_Assignment
 Name        : ex1.c
 Author      : Esraa_Salman
 Description : Write a c program to store information of a student using structure
 **************************************************************************************************/
#include <stdio.h>
#include <stdlib.h>
/***************************************************************************************************
 * Structure_Name: Student_Informations
 * Description: a structure to store information of a student
 ***************************************************************************************************/
struct Student_Informations
{
	char name[25];
	int roll;
	float marks;
};
/*****************************************************************************************************
 *                                       The main function                                           *
 *****************************************************************************************************/
int main( void )
{
	struct Student_Informations s_studennt ;
	/*Tell user to enter the information of student*/
	printf("Enter the information of student:\n\r");
	printf("Enter the name: ");
	fflush(stdin);fflush(stdout);
	/*Take the name from user*/
	scanf("%s",s_studennt.name);
	printf("Enter the roll:  ");
	fflush(stdin);fflush(stdout);
	/*Take the roll*/
	scanf("%d",&s_studennt.roll);
	printf("Enter the marks:  ");
	fflush(stdin);fflush(stdout);
	/*Take the marks*/
	scanf("%f",&s_studennt.marks);
	/*Displaying the informations of the student*/
	printf("Displaying the informations\n\r"
			"Name: %s\n"
			"Roll: %d\n"
			"Marks: %.2f",s_studennt.name,s_studennt.roll,s_studennt.marks);
	return 0;
}

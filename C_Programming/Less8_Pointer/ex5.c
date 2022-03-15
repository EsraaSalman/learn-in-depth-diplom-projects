/**************************************************************************************************
 Lecture_8_Assignment
 Name        : ex5.c
 Author      : Esraa_Salman
 Description : Write a c program show pointer to an array which contents are pointer to structure
 **************************************************************************************************/
#include <stdio.h>
#include <stdlib.h>
/***************************************************************************************************
 *                                      Preprocessor Macros                                                        *
 ***************************************************************************************************/
#define str_size 20
#define arr_size 3
/***************************************************************************************************
 * Structure_Name: employee
 * Description: content a name and id of an employee
 ***************************************************************************************************/
struct employee
{
	char Name[str_size];
	int  ID;
};
/*****************************************************************************************************
 *                                       The main function                                           *
 *****************************************************************************************************/
int main( void )
{
	/*Definition and inilization of three struct type of employee*/
	struct employee s_emp0={"Esraa",1},s_emp1={"Mohamed",2},s_emp2={"Mostafa",3};
	/*Definition and inilization of an array which contents are pointer to structure*/
	struct employee (*arr[arr_size])={&s_emp0,&s_emp1,&s_emp2};
	/*Defintion and inilizationof a pointer to an array which contents are pointer to structure*/
	struct employee (*(*ptr)[arr_size])=&arr;
	printf("The name of employee[1]: %s\n", (**(*ptr+1) ).Name);
	printf("The id of employee[1]  : %d\r\n", (**(*ptr+1) ).ID );
    /*the explanation*/
	printf("The explanation:-\n");
	printf( "**(*ptr+1)=**(*&arr+1)\n");
	printf("**(*&arr+1)=**(&arr[1])\n");
	printf( "**(&arr[1]=*arr[1]\n");
	printf( "*arr[1]=s_emp1\n");

	return 0;
}

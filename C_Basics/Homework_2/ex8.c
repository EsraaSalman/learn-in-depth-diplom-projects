/***********************************************************************************************
 *  Learn_in_depth_C_Programmimg_Lecture_3_Ass
 *  ex8.c: Write c program to check whether a number is even or odd
 *  Created on: 31/12/2021
 *  Author: Esraa_salman
 **********************************************************************************************/

#include <stdio.h>
#include <stdlib.h>

int main()

{
	float  operand1, operand2, result;
	char operator;

	printf("Enter the operator either '+' or '-' or '*' or '/' : ");
	fflush(stdout);fflush(stdin);
	scanf("%c",&operator);
	printf("\nEnter the two operand : ");
	fflush(stdout);fflush(stdin);
	scanf("%f%f",&operand1,&operand2);

	switch(operator)
	{
	case '+': result=operand1+operand2;
	break;
	case '-': result=operand1-operand2;
	break;
	case '*': result=operand1*operand2;
	break;
	case '/': result=operand1/operand2;
	break;
	default:  printf("\nError!!! Enter right operator please ");
	}
	printf("\n%.3f %c %.3f = %.3f",operand1,operator,operand2,result);

	return 0;
}

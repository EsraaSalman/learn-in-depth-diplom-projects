/***********************************************************************************************
 *  Learn_in_depth_C_Programmimg_Lecture_4_Ass
 *  Arr_EX_3: Write C Program to find transpose of matrix
 *  Created on: 09/01/2022
 *  Author: Esraa_salman
 **********************************************************************************************/

#include <stdio.h>
#include <stdlib.h>
int main ()
{
	int row, col , count_r , count_c;
	int matrix[10][10],transpose[10][10];
	printf("Enter number of row : ");
	fflush(stdout);fflush(stdin);
	scanf("%d",&row);
	printf("Enter number of column : ");
	fflush(stdout);fflush(stdin);
	scanf("%d",&col);
	while( ((row<=0) || (row>10)) || ((col<=0) || (col>10)))
		{
			printf("Error!!, number of row and column should be 1->10\r\n");
			printf("Enter number of row again: ");
			fflush(stdout);fflush(stdin);
			scanf("%d",&row);
			printf("Enter number of column again: ");
			fflush(stdout);fflush(stdin);
			scanf("%d",&col);
		}
	printf("\r\nEnter elements of matrix\r\n");
	for(count_r=1;count_r<=row;count_r++)
	{ for(count_c=1;count_c<=col;count_c++)
		{
			printf("Enter element a%d%d: ",count_r,count_c);
			fflush(stdout);fflush(stdin);
			scanf ("%d",&matrix[count_r][count_c]);
		}
	}
	printf("Entered Matrix : \r\n");
	for(count_r=1;count_r<=row;count_r++)
		{ for(count_c=1;count_c<=col;count_c++)
			{
				printf("%d\t",matrix[count_r][count_c]);
			}
			printf("\r\n");
		}
	printf("Transpose of Matrix : \r\n");
	for(count_r=1;count_r<=col;count_r++)
		{ for(count_c=1;count_c<=row;count_c++)
			{
				transpose[count_r][count_c]= matrix[count_c][count_r];
				printf("%d\t",transpose[count_r][count_c]);
			}
			printf("\r\n");
		}

	return 0;
}

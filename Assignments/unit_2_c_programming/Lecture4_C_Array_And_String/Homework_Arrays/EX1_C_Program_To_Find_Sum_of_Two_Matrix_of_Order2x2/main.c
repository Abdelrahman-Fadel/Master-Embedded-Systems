/*
 ======================================================================================================================
 Name        : EX1_C_Program_To_Find_Sum_of_Two_Matrix_of_Order2*2
 Author      : Abdelrahman Fadel
 Created on	 : August 15, 2023
 Description : Unit 2 C-Programming >> Lecture4_C_Array_And_String >> Homework_Arrays
 ======================================================================================================================
 */

#include <stdio.h>

int main()
{
	float a[2][2] , b[2][2] , sum[2][2] ;
	printf ("Enter the elements of the 1st matrix\n");
	for (int i = 0 ; i < 2 ; i++){
		for ( int j = 0 ; j < 2 ; j++){
			printf("Enter a%d%d: " , i+1 , j+1) ;
			fflush(stdout);
			scanf("%f" , &a[i][j]) ;
		}
	}

	printf ("Enter the elements of the 2nd matrix\n");
	for (int i = 0 ; i < 2 ; i++){
		for ( int j = 0 ; j < 2 ; j++){
			printf("Enter b%d%d: " , i+1 , j+1) ;
			fflush(stdout);
			scanf("%f" , &b[i][j]) ;
		}
	}
	for (int i = 0 ; i < 2 ; i++){
		for ( int j = 0 ; j < 2 ; j++){
			sum[i][j] = a[i][j] + b[i][j] ;
		}
	}
	printf("Sum of matrix:\n");
	for (int i = 0 ; i < 2 ; i++){
		for ( int j = 0 ; j < 2 ; j++){
			printf("%0.1f\t" , sum[i][j]) ;
		}
		printf("\n");
	}
}

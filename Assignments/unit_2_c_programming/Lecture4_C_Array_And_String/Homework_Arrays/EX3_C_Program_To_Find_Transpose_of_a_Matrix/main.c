/*
 ======================================================================================================================
 Name        : EX3_C_Program_To_Find_Transpose_of_a_Matrix
 Author      : Abdelrahman Fadel
 Created on	 : August 15, 2023
 Description : Unit 2 C-Programming >> Lecture4_C_Array_And_String >> Homework_Arrays
 ======================================================================================================================
 */

#include <stdio.h>

int main()
{
	int rows , columns , i , j , a[10][10] ,trans[10][10] ;
	printf("Enter rows and columns of matrix: ") ;
	fflush(stdout);
	scanf("%d %d", &rows , &columns ) ;

	printf("\nEnter elements of matrix:\n") ;
	for (i = 0 ; i < rows ; i++) {
		for (j = 0 ; j < columns ; j++){
			printf("Enter elements a%d%d: " , i+1 , j+1 ) ;
			fflush(stdout) ;
			scanf("%d" , &a[i][j] ) ;
		}
	}

	printf("Entered matrix:\n") ;
	for (i = 0 ; i < rows ; i++) {
		for (j = 0 ; j < columns ; j++){
			printf("%d  " , a[i][j]) ;
		}
		printf("\n\n");
	}
	printf("\n\n") ;

	for (i = 0 ; i < rows ; i++) {
		for (j = 0 ; j < columns ; j++){
			trans[j][i] = a[i][j] ;
		}
	}

	printf("Transpose of matrix:\n") ;
	for (i = 0 ; i < columns ; i++) {
		for (j = 0 ; j < rows ; j++){
			printf("%d  " , trans[i][j]) ;
		}
		printf("\n\n");
	}
}

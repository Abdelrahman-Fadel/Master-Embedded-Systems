/*
 ======================================================================================================================
 Name        : Lab3_Calculate_and_Print_The_Transpose_of_3x3_Matrix
 Author      : Abdelrahman Fadel
 Created on	 : August 15, 2023
 Description : Unit 2 C-Programming >> Lecture4_C_Array_And_String >> Lab
 ======================================================================================================================
 */

#include <stdio.h>
int main()
{
	float a[3][3] , t[3][3] ;
	int i , j ;

	for(int i = 0 ; i < 3 ; i++){
		for(int j = 0 ; j < 3 ; j++){
			printf("Enter the item (%d , %d) : ",i,j);
			fflush(stdout);
			scanf("%f",&a[i][j]) ;
		}
	}

	printf("The matrix is:\n");
	for(int i = 0 ; i < 3 ; i++){
		for(int j = 0 ; j < 3 ; j++){
			printf("%0.2f  ",a[i][j]);
		}
		printf("\n\n");
	}

	for(int i = 0 ; i < 3 ; i++){
		for(int j = 0 ; j < 3 ; j++){
			t[j][i] = a[i][j];
		}
	}

	printf("The transpose matrix is:\n");
	for(int i = 0 ; i < 3 ; i++){
		for(int j = 0 ; j < 3 ; j++){
			printf("%0.2f  ",t[i][j]);
		}
		printf("\n\n");
	}
	return 0;
}

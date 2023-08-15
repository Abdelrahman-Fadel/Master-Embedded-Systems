/*
 ======================================================================================================================
 Name        : Lab1_Store_And_Print_10_Students_Degrees
 Author      : Abdelrahman Fadel
 Created on	 : August 15, 2023
 Description : Unit 2 C-Programming >> Lecture4_C_Array_And_String >> Lab
 ======================================================================================================================
 */

#include <stdio.h>
int main()
{
	float degrees[10] ;
	int i ;

	for(i=0 ; i<10 ; i++){
		printf("Enter student %i degree : ",i+1);
		fflush(stdout);
		scanf("%f" , &degrees[i]) ;
	}

	for (i=0 ; i<10 ; i++){
		printf("\nstudent %d degree is %f",i+1 , degrees[i]);
	}
	return 0;
}

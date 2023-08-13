/*
 ======================================================================================================================
 Name        : EX3_C_Program_To_Find_The_Largest_Number_Among_Three_Numbers
 Author      : Abdelrahman Fadel
 Created on	 : August 13, 2023
 Description : Unit 2 C-Programming >> Lecture3_C_Basics >> Homework_2 >> EX3 Program To Find The Largest Number Among Three Numbers
 ======================================================================================================================
 */

#include <stdio.h>

int main()
{
	float num1 , num2 , num3 ;
	printf("Enter three numbers: ");
	fflush(stdout);
	scanf("%f %f %f" ,&num1 , &num2 , &num3 );

	if (num1>num2){
		if(num1>num3)
			printf("Largest number = %.2f " , num1);
		else
			printf("Largest number = %.2f " , num3);
	}

	else {
		if (num2>num3)
			printf("Largest number = %.2f " , num2);
		else
			printf("Largest number = %.2f " , num3);
	}



	return 0 ;
}


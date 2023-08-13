/*
 ======================================================================================================================
 Name        : EX1_C_Program_To_Check_Whether_a_Number_is_Even_or_Odd
 Author      : Abdelrahman Fadel
 Created on	 : August 13, 2023
 Description : Unit 2 C-Programming >> Lecture3_C_Basics >> Homework_2 >> EX1 Program To Check Whether a Number is Even or Odd
 ======================================================================================================================
 */

#include <stdio.h>

int main()
{
	int num ;

	printf("Enter an integer you want to check: ");
	fflush(stdout);
	scanf("%d", &num);

	if (num%2==0) {
		printf("%d is even." , num);
	}
	else {
		printf("%d is odd." , num);
	}
	return 0 ;
}


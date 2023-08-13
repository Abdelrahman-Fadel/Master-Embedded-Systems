/*
 ======================================================================================================================
 Name        : EX2_C_Program_To_Print_a_Integer_Entered_by_a_User
 Author      : Abdelrahman Fadel
 Created on	 : August 13, 2023
 Description : Unit 2 C-Programming >> Lecture3_C_Basics >> Homework_1 >> EX2_C_Program_To_Print_a_Integer_Entered_by_a_User
 ======================================================================================================================
 */

#include <stdio.h>

int main()
{
	int num ;
	printf("Enter a integer: ");
	fflush(stdout);
	scanf("%d" , &num);
	printf("You entered: %d" , num) ;
	return 0 ;
}



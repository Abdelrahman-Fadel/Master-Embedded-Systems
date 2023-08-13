/*
 ======================================================================================================================
 Name        : EX5_C_Program_To_Find ASCII_Value_of_a_Character
 Author      : Abdelrahman Fadel
 Created on	 : August 13, 2023
 Description : Unit 2 C-Programming >> Lecture3_C_Basics >> Homework_1 >> EX5 C Program To Find ASCII Value of a Character
 ======================================================================================================================
 */

#include <stdio.h>

int main()
{
	char character ;
	printf("Enter a character: ");
	fflush(stdout);
	scanf("%c" , &character);
	printf("ASCII value of %c = %d" , character , character);
	return 0 ;
}



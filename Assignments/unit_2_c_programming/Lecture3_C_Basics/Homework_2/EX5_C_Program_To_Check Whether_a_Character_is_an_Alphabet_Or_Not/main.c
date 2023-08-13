/*
 ======================================================================================================================
 Name        : EX5_C_Program_To_Check Whether_a_Character_is_an_Alphabet_Or_Not
 Author      : Abdelrahman Fadel
 Created on	 : August 13, 2023
 Description : Unit 2 C-Programming >> Lecture3_C_Basics >> Homework_2 >> EX5 Program To Check Whether a Character is an Alphabet Or Not
 ======================================================================================================================
 */

#include <stdio.h>

int main()
{

	char c ;
	printf("Enter a character: ");
	fflush(stdout);
	scanf("%c", &c);

	if ( (c>='a'&&c<='z') || (c>='A'&&c<='Z') )
		printf("%c is an alphabet", c);
	else
		printf("%c is not an alphabet", c);


	return 0 ;
}


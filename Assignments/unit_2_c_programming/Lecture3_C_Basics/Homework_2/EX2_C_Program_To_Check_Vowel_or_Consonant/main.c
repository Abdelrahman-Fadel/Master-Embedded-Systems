/*
 ======================================================================================================================
 Name        : EX2_C_Program_To_Check_Vowel_or_Consonant
 Author      : Abdelrahman Fadel
 Created on	 : August 13, 2023
 Description : Unit 2 C-Programming >> Lecture3_C_Basics >> Homework_2 >> EX2 Program To Check Vowel or Consonant
 ======================================================================================================================
 */

#include <stdio.h>

int main()
{
	char c;
	printf("Enter an alphabet: ");
	fflush(stdout);
	scanf("%c", &c);

	if ( c=='a' || c=='A' || c=='e' || c=='E' || c=='i' || c=='I' || c=='o' || c=='O' || c=='u' || c=='U' ) {
		printf ("%c is a vowel.",c);
	}
	else {
		printf("%c is a Consonant.",c);
	}

	return 0 ;
}


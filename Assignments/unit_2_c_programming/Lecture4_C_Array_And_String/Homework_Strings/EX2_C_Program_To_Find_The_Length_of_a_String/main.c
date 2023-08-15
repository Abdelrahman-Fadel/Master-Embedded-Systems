/*
 ======================================================================================================================
 Name        : EX2_C_Program_To_Find_The_Length_of_a_String
 Author      : Abdelrahman Fadel
 Created on	 : August 15, 2023
 Description : Unit 2 C-Programming >> Lecture4_C_Array_And_String >> Homework_Strings
 ======================================================================================================================
 */

#include <stdio.h>
int main()
{
	char str[1000] ;
	int length ;

	printf("Enter a string: ");
	fflush(stdout);
	scanf("%s", str);

	for(length=0 ; str[length] != '\0' ;  ){
		length++;
	}

	printf("Length of string: %d",length);
	return 0;
}

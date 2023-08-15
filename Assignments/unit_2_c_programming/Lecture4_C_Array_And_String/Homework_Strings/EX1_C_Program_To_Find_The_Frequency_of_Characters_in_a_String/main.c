/*
 ======================================================================================================================
 Name        : EX1_C_Program_To_Find_The_Frequency_of_Characters_in_a_String
 Author      : Abdelrahman Fadel
 Created on	 : August 15, 2023
 Description : Unit 2 C-Programming >> Lecture4_C_Array_And_String >> Homework_Strings
 ======================================================================================================================
 */

#include <stdio.h>
int main()
{
	char str[1000] , ch;
	int freq=0 , i ;
	printf("Enter a string: ");
	fflush(stdout);
	gets(str);

	printf("Enter a character to find frequency: ");
	fflush(stdout);
	scanf("%c",&ch);

	for (i=0 ; str[i] != 0 ; i++){
		if (str[i]==ch)
			freq++;
	}
	printf("Frequency of %c = %d",ch , freq) ;

	return 0;
}

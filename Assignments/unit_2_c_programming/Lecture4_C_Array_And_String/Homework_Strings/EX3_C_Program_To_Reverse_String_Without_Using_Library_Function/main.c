/*
 ======================================================================================================================
 Name        : EX3_C_Program_To_Reverse_String_Without_Using_Library_Function
 Author      : Abdelrahman Fadel
 Created on	 : August 15, 2023
 Description : Unit 2 C-Programming >> Lecture4_C_Array_And_String >> Homework_Strings
 ======================================================================================================================
 */

#include <stdio.h>
int main()
{
	char str[1000] , temp ;
	int l , i=0 ;
	printf("Enter the string: ");
	fflush(stdout);
	gets(str);

	l= strlen(str) -1 ;

	while(i < l) {
		temp=str[i];
		str[i]=str[l] ;
		str[l]=temp;
		i++;
		l--;
	}
	printf("\nReverse string is : %s",str);
	return 0;
}


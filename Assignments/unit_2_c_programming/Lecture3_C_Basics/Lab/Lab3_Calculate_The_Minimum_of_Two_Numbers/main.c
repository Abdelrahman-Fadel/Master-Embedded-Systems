/*
 ======================================================================================================================
 Name        : Lab3_Calculate_The_Minimum_of_Two_Numbers
 Author      : Abdelrahman Fadel
 Created on	 : August 15, 2023
 Description : Unit 2 C-Programming >> Lecture3_C_Basics >> Lab
 ======================================================================================================================
 */

#include <stdio.h>
int main()
{
	int num1 , num2  ;

	printf("Enter two numbers : ") ;
	fflush(stdin) ; fflush(stdout) ;
	scanf("%d %d" , &num1 , &num2  ) ;

	printf("The minimum is %d" , (num1<num2?num1:num2)) ;

	return 0;
}

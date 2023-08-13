/*
 ======================================================================================================================
 Name        : EX3_C_Program_To_Add_Two_Integers
 Author      : Abdelrahman Fadel
 Created on	 : August 13, 2023
 Description : Unit 2 C-Programming >> Lecture3_C_Basics >> Homework_1 >> EX3_C_Program_To_Add_Two_Integers
 ======================================================================================================================
 */

#include <stdio.h>

int main()
{
	int num1 , num2 , sum=0;
	printf("Enter two integers: ");
	fflush(stdout);
	scanf("%d %d", &num1 , &num2);
	sum=num1+num2;
	printf("Sum: %d" , sum);
	return 0 ;
}




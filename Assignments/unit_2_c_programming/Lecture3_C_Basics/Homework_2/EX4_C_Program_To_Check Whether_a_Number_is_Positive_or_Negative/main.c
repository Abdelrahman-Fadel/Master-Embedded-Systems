/*
 ======================================================================================================================
 Name        : EX4_C_Program_To_Check Whether_a_Number_is_Positive_or_Negative
 Author      : Abdelrahman Fadel
 Created on	 : August 13, 2023
 Description : Unit 2 C-Programming >> Lecture3_C_Basics >> Homework_2 >> EX4 Program To Check Whether a Number is Positive or Negative
 ======================================================================================================================
 */

#include <stdio.h>

int main()
{
float num ;
printf("Enter a number: ");
fflush(stdout);
scanf("%f", &num);

if (num>0)
	printf("%.2f is positive." , num);
else if (num<0)
	printf("%.2f is Negative." , num);
else
	printf("You entered zero.");


	return 0 ;
}


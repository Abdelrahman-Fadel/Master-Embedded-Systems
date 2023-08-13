/*
 ======================================================================================================================
 Name        : EX4_C_Program_To_Multiply_Two_Floating_Point_Numbers
 Author      : Abdelrahman Fadel
 Created on	 : August 13, 2023
 Description : Unit 2 C-Programming >> Lecture3_C_Basics >> Homework_1 >> EX4 C Program To Multiply Two Floating Point Numbers
 ======================================================================================================================
 */

#include <stdio.h>

int main()
{
	float num1 , num2 , product ;
	printf("Enter two numbers: ");
	fflush(stdout);
	scanf("%f %f", &num1 , &num2);
	product = num1*num2;
	printf("product: %f" , product);
	return 0 ;
}



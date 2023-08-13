/*
 ======================================================================================================================
 Name        : EX7_C_Program_To_Swap_Two_Numbers_Without_Temp_Variable
 Author      : Abdelrahman Fadel
 Created on	 : August 13, 2023
 Description : Unit 2 C-Programming >> Lecture3_C_Basics >> Homework_1 >> EX7 Program To Swap Two Numbers Without Temp Variable
 ======================================================================================================================
 */

#include <stdio.h>

int main()
{
	float a , b , temp ;
	printf("Enter value of a: ");
	fflush(stdout);
	scanf("%f",&a);
	printf("Enter value of b: ");
	fflush(stdout);
	scanf("%f",&b);

	a = a+b;
	b = a-b;
	a = a-b;

	printf("\nAfter swapping, value of a = %.1f\n",a);
	printf("After swapping, value of b = %.1f",b);
	return 0 ;
}


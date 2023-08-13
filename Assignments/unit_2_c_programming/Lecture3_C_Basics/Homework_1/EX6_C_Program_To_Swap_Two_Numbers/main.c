/*
 ======================================================================================================================
 Name        : EX6_C_Program_To_Swap_Two_Numbers
 Author      : Abdelrahman Fadel
 Created on	 : August 13, 2023
 Description : Unit 2 C-Programming >> Lecture3_C_Basics >> Homework_1 >> EX6 Program To Swap Two Numbers
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

	temp=a;
	a=b;
	b=temp;

	printf("\nAfter swapping, value of a = %.2f\n",a);
	printf("After swapping, value of b = %.1f",b);
	return 0 ;
}


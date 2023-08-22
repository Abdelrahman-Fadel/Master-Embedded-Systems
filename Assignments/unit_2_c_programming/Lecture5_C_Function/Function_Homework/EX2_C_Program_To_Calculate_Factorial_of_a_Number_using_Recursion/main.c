/*
 ======================================================================================================================
 Name        : EX2_C_Program_To_Calculate_Factorial_of_a_Number_using_Recursion
 Author      : Abdelrahman Fadel
 Created on	 : August 17, 2023
 Description : Unit 2 C-Programming >> Lecture5_C_Function >> Homework_Function
 ======================================================================================================================
 */
#include <stdio.h>

int factorial (int num) {
	if (num!=1)
	return num*factorial(num-1);
}

int main () {
	int num;
	printf("Enter an positive integer : ");
	fflush(stdout);
	scanf("%d",&num);
	printf("Factorial of %d = %d",num , factorial(num)) ;
	return 0;
}
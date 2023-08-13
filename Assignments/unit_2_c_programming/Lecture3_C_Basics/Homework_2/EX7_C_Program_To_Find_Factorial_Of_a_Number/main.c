/*
 ======================================================================================================================
 Name        : EX7_C_Program_To_Find_Factorial_Of_a_Number
 Author      : Abdelrahman Fadel
 Created on	 : August 13, 2023
 Description : Unit 2 C-Programming >> Lecture3_C_Basics >> Homework_2 >> EX7 Program To Find Factorial Of a Number
 ======================================================================================================================
 */

#include <stdio.h>

int main()
{

	int num , factorial=1 ;
	printf("Enter an integer: ");
	fflush(stdout);
	scanf("%d", &num);

	if(num<0)
		printf("Error!!! Factorial of negative number doesn't exist.");
	else {

		for (int i=1;i<=num;i++){
			factorial*=i;
		}
		printf("Factorial = %d ", factorial);
		return 0 ;
	}
}


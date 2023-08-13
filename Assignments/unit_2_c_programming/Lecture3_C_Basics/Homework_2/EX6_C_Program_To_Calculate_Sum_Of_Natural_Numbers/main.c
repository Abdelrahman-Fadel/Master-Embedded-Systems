/*
 ======================================================================================================================
 Name        : EX6_C_Program_To_Calculate_Sum_Of_Natural_Numbers
 Author      : Abdelrahman Fadel
 Created on	 : August 13, 2023
 Description : Unit 2 C-Programming >> Lecture3_C_Basics >> Homework_2 >> EX6 Program To Calculate Sum Of Natural Numbers
 ======================================================================================================================
 */

#include <stdio.h>

int main()
{

	int num , sum=0 ;
	printf("Enter an integer: ");
	fflush(stdout);
	scanf("%d", &num);

	for (int i=1;i<=num;i++){
		sum+=i;
	}
	printf("sum = %d ", sum);
	return 0 ;
}


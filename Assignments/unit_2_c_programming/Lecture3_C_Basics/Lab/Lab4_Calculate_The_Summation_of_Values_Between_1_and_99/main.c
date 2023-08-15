/*
 ======================================================================================================================
 Name        : Lab4_Calculate_The_Summation_of_Values_Between_1_and_99
 Author      : Abdelrahman Fadel
 Created on	 : August 15, 2023
 Description : Unit 2 C-Programming >> Lecture3_C_Basics >> Lab
 ======================================================================================================================
 */

#include <stdio.h>
int main()
{
	int i , sum = 0 ;

	for(i=1 ; i<=99 ; i++){
		sum+=i ;
	}
	printf("Summation of values between ( 1 and 99 ) is : %d",sum);

	return 0;
}

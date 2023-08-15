/*
 ======================================================================================================================
 Name        : Lab2_Comparing_Three_Numbers
 Author      : Abdelrahman Fadel
 Created on	 : August 15, 2023
 Description : Unit 2 C-Programming >> Lecture3_C_Basics >> Lab
 ======================================================================================================================
 */

#include <stdio.h>
int main()
{
	int num1 , num2 , num3 ;

	printf("Enter three values : ") ;
	fflush(stdin) ; fflush(stdout) ;
	scanf("%d %d %d" , &num1 , &num2 , &num3 ) ;

	if (num1 > num2){
		if (num1 > num3)
			printf("The largest value is : %d", num1);
		else
			printf("The largest value is : %d", num3);
	}

	else {
		if (num2 > num3)
			printf("The largest value is : %d", num2);
		else
			printf("The largest value is : %d", num3);
	}

	return 0;
}

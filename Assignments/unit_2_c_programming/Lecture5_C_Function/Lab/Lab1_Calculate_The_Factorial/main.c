/*
 ======================================================================================================================
 Name        : Lab1_Calculate_The_Factorial
 Author      : Abdelrahman Fadel
 Created on	 : August 16, 2023
 Description : Unit 2 C-Programming >> Lecture5_C_Function >> Lab
 ======================================================================================================================
 */

#include <stdio.h>

int factorial (int num) {
	int fact = 1 ;
	for (int i=1 ; i<=num ; i++){
		fact*=i ;
	}
	return fact ;
}


int main () {

	printf("Factorial(%d) = %d \r\n" , 10 , factorial(10)) ;
	printf("Factorial(%d) = %d \r\n" , 0 , factorial(0)) ;
	printf("Factorial(%d) = %d \r\n" , 5 , factorial(5)) ;

	return 0;
}


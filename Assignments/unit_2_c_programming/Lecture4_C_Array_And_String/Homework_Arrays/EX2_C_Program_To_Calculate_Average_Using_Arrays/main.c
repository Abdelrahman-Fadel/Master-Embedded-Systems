/*
 ======================================================================================================================
 Name        : EX2_C_Program_To_Calculate_Average_Using_Arrays
 Author      : Abdelrahman Fadel
 Created on	 : August 15, 2023
 Description : Unit 2 C-Programming >> Lecture4_C_Array_And_String >> Homework_Arrays
 ======================================================================================================================
 */

#include <stdio.h>

int main()
{
	int n ;
	float arr[100] , sum=0.0 , average ;
	printf("Enter the number of data: ");
	fflush(stdout) ;
	scanf("%d" , &n ) ;
	while ( n>100 || n<=0 ) {
		printf("Error! number should be in range of (1 to 100)\n") ;
		printf("Enter the number again: ") ;
		fflush(stdout) ;
		scanf("%d" , &n ) ;
	}
	for (int i = 0 ; i < n ; i++ ) {
		printf("%d. Enter number: " , i+1 );
		fflush(stdout);
		scanf("%f" ,  &arr[i] ) ;
		sum += arr[i] ;
	}
	average = sum / n ;
	printf("Average = %0.2f" , average ) ;
}

/*
 ======================================================================================================================
 Name        : Q1_C_Function_To_Take_a_Number_and_Sum_all_Digits
 Author      : Abdelrahman Fadel
 Created on	 : August 29, 2023
 Description : Unit 2 C-Programming >> MidTerm1_Exam
 ======================================================================================================================
 */
#include <stdio.h>

int sum_digit (int n);

int main () {
	int num ;
	printf("Enter the number of case 1 : ");
	fflush(stdout); fflush(stdin);
	scanf("%d",&num);
	printf("The Sum of Digits of %d is : %d\n\n",num,sum_digit(num));

	printf("Enter the number of case 2 : ");
	fflush(stdout); fflush(stdin);
	scanf("%d",&num);
	printf("The Sum of Digits of %d is : %d",num,sum_digit(num));

	return 0;
}

int sum_digit (int n){
	int sum=0 ;

	while (n!=0) {
		sum+=n%10;
		n/=10;
	}

	return sum;
}


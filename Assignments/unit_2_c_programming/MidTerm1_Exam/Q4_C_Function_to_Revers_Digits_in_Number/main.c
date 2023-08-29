/*
 ======================================================================================================================
 Name        : Q4_C_Function_to_Revers_Digits_in_Number
 Author      : Abdelrahman Fadel
 Created on	 : August 29, 2023
 Description : Unit 2 C-Programming >> MidTerm1_Exam
 ======================================================================================================================
 */
#include <stdio.h>

int reverse_digits(int n){
	int r_num=0 ;
	while (n!=0){
		r_num*=10;
		r_num+=(n%10);
		n/=10;
	}
	return r_num;
}

int main () {
	int num ;
	printf("Enter a number of case 1 : ");
	fflush(stdout); fflush(stdin);
	scanf("%d",&num);
	printf("The reversed number is : %d\n\n",reverse_digits(num));

	printf("Enter a number of case 2 : ");
	fflush(stdout); fflush(stdin);
	scanf("%d",&num);
	printf("The reversed number is : %d",reverse_digits(num));
}

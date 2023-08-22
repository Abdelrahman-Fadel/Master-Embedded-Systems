/*
 ======================================================================================================================
 Name        : EX4_C_Program_To_Calculate_The_Power_a_Number_using_Recursion
 Author      : Abdelrahman Fadel
 Created on	 : August 17, 2023
 Description : Unit 2 C-Programming >> Lecture5_C_Function >> Homework_Function
 ======================================================================================================================
 */
#include <stdio.h>

int power(int a , int b) ;

int main () {
	int base_num , power_num ;
	printf("Enter base number : ") ;
	fflush(stdout);
	scanf("%d",&base_num);
	printf("Enter power number (positive integer) : ");
	fflush(stdout);
	scanf("%d",&power_num);

	printf("%d^%d = %d",base_num , power_num , power(base_num,power_num));

	return 0;
}
int power (int base , int exp) {
	if (exp!=0)
		return (base * power(base , exp-1));
	else
		return 1;

}

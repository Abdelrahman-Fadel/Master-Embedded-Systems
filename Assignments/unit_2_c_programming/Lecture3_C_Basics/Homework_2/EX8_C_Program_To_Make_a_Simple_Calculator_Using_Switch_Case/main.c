/*
 ======================================================================================================================
 Name        : EX8_C_Program_To_Make_a_Simple_Calculator_Using_Switch_Case
 Author      : Abdelrahman Fadel
 Created on	 : August 13, 2023
 Description : Unit 2 C-Programming >> Lecture3_C_Basics >> Homework_2 >> EX8 Program To Make a Simple Calculator Using Switch Case
 ======================================================================================================================
 */

#include <stdio.h>

int main()
{
	char operator;
	float num1 , num2 ;
	printf("Enter operator either + or - or * or divide : ");
	fflush(stdout);
	scanf("%c", &operator);
	printf("Enter two operands: ");
	fflush(stdout);
	scanf("%f%f", &num1 , &num2);

	switch(operator) {
	case '+' :
		printf("%.1f + %.1f = %.1f" , num1 , num2 , num1+num2);
		break;
	case '-' :
		printf("%.1f - %.1f = %.1f" , num1 , num2 , num1-num2);
		break;
	case '*' :
		printf("%.1f * %.1f = %.1f" , num1 , num2 , num1*num2);
		break;
	case '/' :
		printf("%.1f / %.1f = %.1f" , num1 , num2 , num1/num2);
		break;
	default:
		printf("Error! operator is not correct");
		break;
	}
	return 0 ;
}


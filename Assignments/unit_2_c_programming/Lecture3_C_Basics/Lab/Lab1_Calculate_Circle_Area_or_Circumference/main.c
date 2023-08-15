/*
 ======================================================================================================================
 Name        : Lab1_Calculate_Circle_Area_or_Circumference
 Author      : Abdelrahman Fadel
 Created on	 : August 15, 2023
 Description : Unit 2 C-Programming >> Lecture3_C_Basics >> Lab
 ======================================================================================================================
 */

#include <stdio.h>
int main()
{
	float r=3 , area , circumference ;
	char choice='c' ;

	printf("Enter circle redius: ") ;
	fflush(stdin) ; fflush(stdout);
	scanf("%f", &r);

	printf("Enter your choice (a to print the area , c to print the circumference) : ") ;
	fflush(stdin) ; fflush(stdout);
	scanf("%c",&choice);

	if (choice=='a') {
		area = 3.14159 * r * r ;
		printf ("Area is : %f",area);
	}
	else if (choice=='c'){
		circumference = 2 * 3.14159 * r ;
		printf("circumference is : %f",circumference);
	}
	else
		printf("Wrong choice!!") ;


	return 0;
}

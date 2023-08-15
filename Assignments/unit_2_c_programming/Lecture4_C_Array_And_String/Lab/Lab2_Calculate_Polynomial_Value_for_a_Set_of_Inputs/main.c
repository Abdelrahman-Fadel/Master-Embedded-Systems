/*
 ======================================================================================================================
 Name        : Lab2_Calculate_Polynomial_Value_for_a_Set_of_Inputs
 Author      : Abdelrahman Fadel
 Created on	 : August 15, 2023
 Description : Unit 2 C-Programming >> Lecture4_C_Array_And_String >> Lab
 ======================================================================================================================
 */

#include <stdio.h>
int main()
{
	float x[] = {5,16,22,3.5,15} , y ;
	int i ;

	for(i=0 ; i<5 ; i++){
		y= 5 * x[i] * x[i] + 3 * x[i] + 2 ;
		printf("y(%f) = %f \n",x[i],y) ;
	}
	return 0;
}

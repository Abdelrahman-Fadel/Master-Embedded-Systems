/*
 ======================================================================================================================
 Name        : Lab2_Calculate_The_Minimum_Value_Of_Any_Given_Array
 Author      : Abdelrahman Fadel
 Created on	 : August 16, 2023
 Description : Unit 2 C-Programming >> Lecture5_C_Function >> Lab
 ======================================================================================================================
 */

#include <stdio.h>

int calc_min (int numbers[] , int n ) {
	int min = numbers[0] , i ;
	for (i = 0 ; i < n ; i++){
		if (numbers[i] < min)
			min = numbers[i] ;
	}
	return min ;
}


int main () {

	int numbers_x[5] = {16 , 32 , 15 , 2 , 25 } ;
	int numbers_y[5] = {28 , 64 , 13 , 52 , 46 } ;
	int numbers_z[5] = {108 , 74 , 30 , 67 , 39 } ;

	printf("The minimum values of x , y and z is : ( %d , %d , %d )\r\n ",calc_min(numbers_x,5),calc_min(numbers_y,5),calc_min(numbers_z,5)) ;

	return 0;
}


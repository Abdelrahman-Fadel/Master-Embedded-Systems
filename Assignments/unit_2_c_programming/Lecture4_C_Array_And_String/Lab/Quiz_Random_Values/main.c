/*
 ======================================================================================================================
 Name        : Quiz_Random_Values
 Author      : Abdelrahman Fadel
 Created on	 : August 15, 2023
 Description : Unit 2 C-Programming >> Lecture4_C_Array_And_String >> Lab
 ======================================================================================================================
 */

#include <stdio.h>
#include <string.h>
int main()
{
	int x[10] , i  , c ;
	for ( i=0 ; i<10 ; i++ ) {
		check:
		c=rand();
		if (c>=1 && c<=1000)
			x[i]=c;
		else
			goto check ;
	}

	for ( i=0 ; i<10 ; i++ ){
		if ( x[i] < x[i+1] && x[i+1] > x[i+2] ){
			printf("%d  ",x[i]);
		}
	}

	return 0;
}

/*
 ======================================================================================================================
 Name        : Lab6_Quiz_Pattern
 Author      : Abdelrahman Fadel
 Created on	 : August 15, 2023
 Description : Unit 2 C-Programming >> Lecture3_C_Basics >> Lab
 ======================================================================================================================
 */

#include <stdio.h>
int main()
{

	for (int i = 0 ; i<= 9 ; i++){
		for(int j = i ; j<=9 ; j++){
			printf("%d ",j);
		}
		printf("\n");
	}

	return 0;
}

/*
 ======================================================================================================================
 Name        : Lab3_Finding_a_Name_in_a_Set_of_Names
 Author      : Abdelrahman Fadel
 Created on	 : August 16, 2023
 Description : Unit 2 C-Programming >> Lecture5_C_Function >> Lab
 ======================================================================================================================
 */

#include <stdio.h>
#include "string.h"
void find_name (char names[][14] , int n , char name[]) {
	for (int i=0 ; i<n ; i++){
		if (stricmp(names[i],name)==0){
			printf("Welcome");
			break ;
		}
		if (i==n)
			printf("Goodbye");
	}
}

int main () {

	char name[14];
	char names[5][14] = {"Alaa" , "Osama" , "Mamdouh" , "Karam" , "Ahmed"};
	printf("Enter your name : ");
	fflush(stdout);
	gets(name);

	find_name(names , 5 , name) ;

	return 0;
}


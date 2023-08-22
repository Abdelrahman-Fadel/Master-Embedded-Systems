/*
 ======================================================================================================================
 Name        : EX3_C_Program_To_Reverse_a_Sentence_using_Recursion
 Author      : Abdelrahman Fadel
 Created on	 : August 17, 2023
 Description : Unit 2 C-Programming >> Lecture5_C_Function >> Homework_Function
 ======================================================================================================================
 */
#include <stdio.h>

void reverse() ;

int main () {
	printf("Enter a sentence : ") ;
	reverse();
	return 0;
}
void reverse () {
	char c ;
	fflush(stdout);
	scanf("%c",&c);
	if (c != '\n') {
		reverse();
		printf("%c",c);
	}
}

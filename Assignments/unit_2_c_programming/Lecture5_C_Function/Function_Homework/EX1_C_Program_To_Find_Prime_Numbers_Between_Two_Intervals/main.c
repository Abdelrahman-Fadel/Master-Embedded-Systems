/*
 ======================================================================================================================
 Name        : EX1_C_Program_To_Find_Prime_Numbers_Between_Two_Intervals
 Author      : Abdelrahman Fadel
 Created on	 : August 17, 2023
 Description : Unit 2 C-Programming >> Lecture5_C_Function >> Homework_Function
 ======================================================================================================================
 */
#include <stdio.h>
void prime_numbers (int first_num , int last_num) {
	printf("Prime numbers between %d and %d are : ",first_num , last_num) ;
	int i ;
	for (i=first_num+1 ; i<last_num ; i++){
		int j , flag=0; ;
		for (j=2 ; j<i/2 ; j++){
			if (i%j==0) {
				flag = 0;
				break;
			}
			else
				flag = 1;
		}
		if (flag==1)
			printf("%d ", i );
	}
}
int main () {
	int first , last;
	printf("Enter two numbers (intervals) : ");
	fflush(stdout);
	scanf("%d %d" , &first , &last);
	prime_numbers(first , last);
	return 0;
}

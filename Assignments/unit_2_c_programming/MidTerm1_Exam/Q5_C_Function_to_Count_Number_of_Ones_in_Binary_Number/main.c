/*
 ======================================================================================================================
 Name        : Q5_C_Function_to_Count_Number_of_Ones_in_Binary_Number
 Author      : Abdelrahman Fadel
 Created on	 : August 29, 2023
 Description : Unit 2 C-Programming >> MidTerm1_Exam
 ======================================================================================================================
 */
#include <stdio.h>

int count_ones(int n){
	int count=0;
	while(n!=0){
		count+=n&1;
		n>>=1;
	}
	return count;
}

int main () {
	int num ;
	printf("Enter a number of case 1 : ");
	fflush(stdout); fflush(stdin);
	scanf("%d",&num);
	printf("The number of ones in binary is : %d\n\n",count_ones(num));

	printf("Enter a number of case 2 : ");
	fflush(stdout); fflush(stdin);
	scanf("%d",&num);
	printf("The number of ones in binary is : %d",count_ones(num));
}
// if number is 15 , 15 = 1111
// count+= 1111 & 0001 -> 0001 ,, count = 0 + 1 = 1
// 1111 >> 1 = 0111
// count+= 0111 & 0001 -> 0001 ,, count = 1 + 1 = 2
//0111 >> 1 = 0011
// count+= 0011 & 0001 -> 0001 ,, count = 2 + 1 = 3
//0011 >> 1 = 0001
// count+= 0001 & 0001 -> 0001 ,, count = 3 + 1 = 4
//0001 >> 1 = 0000
// condition (n!=0) is false -> Out of loop

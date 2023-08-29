/*
 ======================================================================================================================
 Name        : Q10_C_Function_to_Count_the_Max_Number_Of_Ones_Between_Two_Zeros
 Author      : Abdelrahman Fadel
 Created on	 : August 29, 2023
 Description : Unit 2 C-Programming >> MidTerm1_Exam
 ======================================================================================================================
 */
#include <stdio.h>

void max_of_ones(int num);

int main () {
	int n;
	printf("Enter a number of case 1 : ");
	fflush(stdout); fflush(stdin);
	scanf("%d",&n);
	max_of_ones(n);

	printf("Enter a number of case 2 : ");
	fflush(stdout); fflush(stdin);
	scanf("%d",&n);
	max_of_ones(n);
	return 0;
}

void max_of_ones(int num){
	int max=0 , count =0 ;
	while(num!=0){
		if(num&1){
			count++;
			if(count>max)
				max=count;
		}

		else {
			count=0;
		}

		num>>=1;
	}

	printf("The Max Number of ones between zeroes is : %d\n\n",max);

}

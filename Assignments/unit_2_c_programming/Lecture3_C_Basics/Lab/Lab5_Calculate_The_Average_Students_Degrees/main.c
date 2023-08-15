/*
 ======================================================================================================================
 Name        : Lab5_Calculate_The_Average_Students_Degrees
 Author      : Abdelrahman Fadel
 Created on	 : August 15, 2023
 Description : Unit 2 C-Programming >> Lecture3_C_Basics >> Lab
 ======================================================================================================================
 */

#include <stdio.h>
int main()
{
	int n , i ;
	float degree , sum=0 ;

	printf("Enter the number of the students : ") ;
	fflush(stdout);
	scanf("%d",&n);

	for(i=1 ; i<=n ; i++){
		printf("Enter student (%d) degree : ",i);
		fflush(stdout);
		scanf("%f",&degree);
		sum+=degree;
	}
	printf("Average students degree is : %f",sum/n);
	return 0;
}

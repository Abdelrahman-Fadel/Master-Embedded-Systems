/*
 ======================================================================================================================
 Name        : Q3_C_Function_to_Print_All_Prime_Numbers_Between_Two_Numbers
 Author      : Abdelrahman Fadel
 Created on	 : August 29, 2023
 Description : Unit 2 C-Programming >> MidTerm1_Exam
 ======================================================================================================================
 */
#include <stdio.h>

void prime (int a , int b);

int main () {
	int a , b ;
	printf("Enter the two numbers : ");
	fflush(stdout); fflush(stdin);
	scanf("%d %d",&a,&b);

	prime(a,b);

	return 0;
}



void prime (int a , int b){
	int i , j , flag ;
	printf("Prime numbers between %d and %d are :\n",a,b);
	for (i=a ; i<=b ; i++ ){
		flag=0;
		for(j=2 ; j<=i/2 ; j++){
			if (i%j==0){
				flag=1;
				break;
			}
		}
		if (flag==0)
			printf("%d\t",i);
	}


}


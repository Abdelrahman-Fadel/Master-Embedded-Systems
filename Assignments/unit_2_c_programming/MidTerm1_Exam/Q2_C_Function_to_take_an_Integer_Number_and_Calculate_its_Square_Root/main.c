/*
 ======================================================================================================================
 Name        : Q2_C_Function_to_take_an_Integer_Number_and_Calculate_its_Square_Root
 Author      : Abdelrahman Fadel
 Created on	 : August 29, 2023
 Description : Unit 2 C-Programming >> MidTerm1_Exam
 ======================================================================================================================
 */
#include <stdio.h>

float square_root (int n);

int main () {
	int num ;
	printf("Enter the number of case 1 : ");
	fflush(stdout); fflush(stdin);
	scanf("%d",&num);
	printf("The Square root of %d is : %.3f\n\n",num,square_root(num));

	printf("Enter the number of case 2 : ");
		fflush(stdout); fflush(stdin);
		scanf("%d",&num);
		printf("The Square root of %d is : %.3f",num,square_root(num));

	return 0;
}



float square_root (int num){
	 double square_root = num / 2;
	  double temp;

	  do {
	    temp = square_root;
	    square_root = (square_root + num / square_root) / 2;
	  } while (square_root != temp);

	  return square_root;
	}
		// there is another way using built-in function -> square_root=sqrt(num) ; but we should include <math.h> library .





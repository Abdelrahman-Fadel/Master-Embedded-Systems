/*
 ======================================================================================================================
 Name        : Q8_C_Function_to_take_an_Array_and_revers_its_elements
 Author      : Abdelrahman Fadel
 Created on	 : August 29, 2023
 Description : Unit 2 C-Programming >> MidTerm1_Exam
 ======================================================================================================================
 */
#include <stdio.h>

void reverse_array(int arr[] , int size);

int main () {
	int i , arr[10] , size ;
	printf("Enter the size of array : ");
	fflush(stdout); fflush(stdin);
	scanf("%d",&size);

	for(i=0; i<size ; i++){
		printf("Enter the element #%d : ",i+1);
		fflush(stdout); fflush(stdin);
		scanf("%d",&arr[i]);
	}
	reverse_array(arr , size);
	return 0;
}
void reverse_array(int arr[] , int size){
	int i , j , r_arr[10] ;
	for(j=0 , i=size-1 ; i>=0 ; i-- , j++ ){
		r_arr[j]=arr[i];
	}
	for(i=0 ; i<size ; i++){
		printf("%d ",r_arr[i]);
	}
}

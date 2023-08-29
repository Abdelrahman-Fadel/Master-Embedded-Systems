/*
 ======================================================================================================================
 Name        : Q6_C_Function_To_Return_Unique_Number_in_array_With_One_Loop
 Author      : Abdelrahman Fadel
 Created on	 : August 29, 2023
 Description : Unit 2 C-Programming >> MidTerm1_Exam
 ======================================================================================================================
 */
#include <stdio.h>

void unique_numbers(int arr[] , int size);

int main () {
	int arr[10] , size , i ;
	printf("Enter the size of array : ");
	fflush(stdout); fflush(stdin);
	scanf("%d",&size);

	for (i = 0 ; i < size ; i++){
		printf("Enter the element #%d : ",i+1);
		fflush(stdout); fflush(stdin);
		scanf("%d",&arr[i]);
	}
	unique_numbers(arr,size);



	return 0;
}
void unique_numbers(int arr[] , int size){
	int freq[10] , i , j , count ;
	for (i=0 ; i<size ; i++){
		count=0;
		for(j=0 ; j<size ; j++){
			if (arr[i]==arr[j]){
				count++;
			}
		}
		freq[i]=count;
	}
	printf("Unique number is : ");
	for(i=0 ; i<size ; i++){
		if (freq[i]==1)
			printf("%d\t",arr[i]);
	}

}

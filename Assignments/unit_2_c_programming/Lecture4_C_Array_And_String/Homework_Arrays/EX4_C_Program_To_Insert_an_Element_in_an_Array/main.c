/*
 ======================================================================================================================
 Name        : EX4_C_Program_To_Insert_an_Element_in_an_Array
 Author      : Abdelrahman Fadel
 Created on	 : August 15, 2023
 Description : Unit 2 C-Programming >> Lecture4_C_Array_And_String >> Homework_Arrays
 ======================================================================================================================
 */

#include <stdio.h>

int main()
{
	int arr[30] , n , i , element , location ;
	printf("Enter no of elements: ") ;
	fflush(stdout) ;
	scanf("%d",&n);
	for (i=0 ; i<n ; i++){
		fflush(stdout);
		scanf("%d", &arr[i]) ;
	}

	printf("\nEnter the element to be inserted: ") ;
	fflush(stdout) ;
	scanf("%d",&element) ;

	printf("\nEnter the location: ");
	fflush(stdout);
	scanf("%d",&location) ;

	for (i=n ; i >= location ; i--) {
		arr[i] = arr[i-1] ;
	}

	n++ ;
	arr[location-1] = element ;

	for (i=0 ; i < n ; i++) {
		printf("%d ", arr[i]) ;
	}
}

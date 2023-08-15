/*
 ======================================================================================================================
 Name        : EX5_C_Program_To_Search_an_Element_in_Array
 Author      : Abdelrahman Fadel
 Created on	 : August 15, 2023
 Description : Unit 2 C-Programming >> Lecture4_C_Array_And_String >> Homework_Arrays
 ======================================================================================================================
 */

#include <stdio.h>

int main()
{
	int arr[30] , n , i , element ;
	printf("Enter no of elements: ") ;
	fflush(stdout) ;
	scanf("%d",&n);

	for (i=0 ; i<n ; i++){
		fflush(stdout);
		scanf("%d", &arr[i]) ;
	}
	printf("Enter the element to be searched: ") ;
	fflush(stdout);
	scanf("%d",&element);

	for (i=0 ; i<n ; ){
		if (arr[i]==element)
			break ;
		else
			i++;
	}

	//			Another way :
	//	for (i=0 ; i<n && arr[i] != element ;  )
	//		i++ ;

	if (i==n)
		printf("Number not found") ;
	else
		printf("Number found at the location = %d",i+1);

}

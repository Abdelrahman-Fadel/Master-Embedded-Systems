/*
 ======================================================================================================================
 Name        : Q9_C_Function_to_Reverse_Words_in_String
 Author      : Abdelrahman Fadel
 Created on	 : August 29, 2023
 Description : Unit 2 C-Programming >> MidTerm1_Exam
 ======================================================================================================================
 */
#include <stdio.h>

void reverse_words(char arr[] , int size);

int main () {
	char str[100] ;
	int len;
	printf("Enter a string : ");
	fflush(stdout); fflush(stdin);
	gets(str);
	len=strlen(str);

	reverse_words(str,len);

	return 0;
}
void reverse_words(char arr[] , int size){

	int i , j , k , space , next_word=size-1 , s=0;
	char reverse[100];

	for (k=0 ; k<size && next_word>0 ; k++){

		for (i=next_word ; i>=0 ; i--){
			if (arr[i]==' '){
				space = i ;
				break;
			}
			if (i==0){
				space=-1;
			}
		}
		next_word=space-1;
		for (i=space+1 , j=s ; i<=size ; i++ , j++){
			if (arr[i]=='\0' || arr[i]==' '){
				reverse[j]=' ';
				break;
			}
			reverse[j]=arr[i];
		}
		s=j+1;
	}
	reverse[s]='\0';

	printf("First String is : %s\n",arr);
	printf("Reversed String is : %s",reverse);
}

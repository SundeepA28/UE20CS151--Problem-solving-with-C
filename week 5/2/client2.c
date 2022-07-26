#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include"header1.h"
int main()
{
	char str1[1000],c1,c2;
	printf("Enter the string : ");
	scanf("%[^\n]s",str1);
	printf("Enter a character to replace : ");
	fflush(stdin);
	scanf("%c",&c1);
	printf("Enter character to replace with %c : ",c1);
	fflush(stdin);
	scanf("%c",&c2);
	printf("\n Before replace :%s",str1);
	replacechar(str1,c1,c2);
	printf("\nAfter replace : %s",str1);
	return 0;
}

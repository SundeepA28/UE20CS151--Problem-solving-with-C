#include<stdio.h>
#include"header3.h"
#define MAX_SIZE 100
int main()
{
	char str[MAX_SIZE];
	printf("Enter any string: ");
	scanf("%[^\n]s",str);
	printf("String before removingduplicates: %s\n",str);
	removeDuplicates(str);
	printf("String after removing duplicates : %s\n",str);
	return 0;
}

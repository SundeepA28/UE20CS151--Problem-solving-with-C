#include<stdio.h>
#include"server_strcat.h"
int main()
{
	char s1[100];char s2[50];
	int n;
	printf("Enter 1st\n");
	scanf("%s",s1);
	printf("Enter 2nd string\n");
	scanf("%s",s2);
	printf("Enter number of times you want to append\n");
	scanf("%d",&n);
	printf("Concatinated string is %s\n",my_strcat(s1,s2,n));
 	return 0;
}

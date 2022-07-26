#include<stdio.h>
#include"1.h"
int main()
{
	char s[50]; char rev[50];
	printf("Enter string \n");
	scanf("%s",s);
	reverse_string(s,rev);
	printf("Reversed string is = %s\n",rev);
	int r = check_equal(s,rev);
	if(r==0)
		printf("Given string %s is palindrome\n",s);
	else
		printf("Given string %s is not a palindrome\n",s);
	return 0;
}

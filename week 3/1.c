#include<stdio.h>
int reverse(int);
int main()
{
	int n,r;
	printf("Enter the number\n");
	scanf("%d",&n);
	r=reverse(n);
	if(n==r)
		printf("The Number %d is a Palindrome\n",n);
	else
		printf("The number %d is not a Palindrome\n",n);
	return 0;
}
int reverse(int n)
{
	int digit,r;
	r=0;
	while(n!=0)
	{
		digit = n%10;
		n=n/10;
		r=r*10+digit;
	}
	return r;
}

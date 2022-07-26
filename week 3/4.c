#include<stdio.h>
int PrimeorNot(int);
int main()
{
	int n1;
	printf("Enter the number");
	scanf("%d",&n1);
	if(PrimeorNot(n1)==1)
		printf("The number %d is a prime number \n",n1);
	else
		printf("The given number %d is not a prime number \n",n1);
	return 0;
}
int PrimeorNot(int n1)
{
	int i=2;
	while(i<=n1/2)
		if(n1%i==0)
			return 0;
		else
			i++;
	return 1;
}

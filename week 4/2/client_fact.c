#include<stdio.h>
#include"server_fact.h"
int main()
{
	int n,r,ncr;
	printf("Enter the value for n and r \n");
	scanf("%d%d",&n,&r);
	ncr=fact(n)/(fact(r)*fact(n-r));
	printf("ncr is : %d",ncr);
	return 0;
}
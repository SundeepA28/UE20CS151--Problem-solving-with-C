#include<stdio.h>
int checkArmstrong(int);
int checkPerfect(int);
int main()
{
	int n1;
	printf("Input any number\n");
	scanf("%d",&n1);
	if(checkArmstrong(n1))
		printf("The given number %d is Armstrong number \n",n1);
	else
		printf("The given number %d is not a Armstrong number \n",n1);
	if(checkPerfect(n1))
		printf("The given number %d is Perfect number \n",n1);
	else
		printf("The given number %d is not a Perfect number \n",n1);
	return 0;
}
int checkArmstrong(int n1)
{
	int d,sum=0,num=n1;
	while(num!=0)
	{
		d=num % 10;
		sum+=d*d*d;
		num=num/10;
	}
	return(n1==sum);
}
int checkPerfect(int n1)
{
	int i,sum=0,num=n1;
	for(i=1;i<num;i++)
		if(num%i ==0)
			sum+=i;
	return (sum == n1);
}
			
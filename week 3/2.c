#include<stdio.h>
int gcd(int ,int);
int main()
{
	int a,b,c,d,res;
	printf("Enter the values of a,b and c\n");
	scanf("%d%d%d",&a,&b,&c);
	d=gcd(a,b);
	res=gcd(d,c);
	printf("GCD of (%d,%d,%d) = %d",a,b,c,res);
}
int gcd(int m ,int n)
{
	while(m!=n)
	{
		if(m>n)
			m=m-n;
		else
			n=n-m;
	}
	return m;
}
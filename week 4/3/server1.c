#include<stdio.h>
#include"unique.h"
void unique(int arr[],int n)
{
	int i,j,k,ctr=0;
	for(i=0;i<n;i++)
	{
		ctr=1;
		for(j=i+1;j<n;j++)
		{
			if(arr[i]==arr[j])
			{
				for(k=j;k<n;k++)
				{
					arr[k]=arr[k+1];
				}
				n--;
				j--;
				ctr=0;
			}
		}
		if(ctr !=1)
		{
			for(j=i;j<n-1;j++)
			{
				arr[j]=arr[j+1];
			}
			n--;
			i--;
		}
	}
	for(i=0;i<n;i++)
	{
		printf("%d\t",arr[i]);
	}
}
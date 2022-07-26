#include<stdio.h>
#include"unique.h"
int main()
{
	int arr1[100],n,ctr=0;
	int i,j,k;
	printf("Input the number of elements to be stored in the array: ");
	scanf("%d",&n);
	printf("Input %d elements in the array : \n",n);
	for(i=0;i<n;i++)
	{
		printf("elements - %d : ",i);
		scanf("%d",&arr1[i]);
	}
	printf("\nThe unique elments found in the array are : \n");
	unique(arr1,n);
}

 
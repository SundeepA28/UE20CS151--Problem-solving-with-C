#include<stdio.h>
#include "server_rev_array.h"
void reverse_arr(int a[],int start,int end)
{
	int temp;
	while(start < end)
	{
		temp = *(a+start);
		*(a+start)=*(a+end);
		*(a+end)=temp;
		start++;
		end--;
	}
}
void read_array(int a[],int n)
{
	int i;
	printf("Enter the elements \n");
	for(i=0;i<n;i++)
		scanf("%d",&a[i]);
}
void disp_array(int a[],int n)
{
	int i;
	for(i=0;i<n;i++)
		printf("%d ",a[i]);
	printf("\n");
}

#include<stdio.h>
#include"server_rev_array.h"
int main()
{
	int a[100];
	int n,i;
	printf("Enter the size of an array \n");
	scanf("%d",&n);
	printf("The array is\n");
	read_array(a,n);
	disp_array(a,n);
	reverse_arr(a,0,n-1);
	printf("Reversed array : \n");
	disp_array(a,n);
	return 0;
}


#include<stdio.h>
int main()
{
    int n;
    printf("Enter the value of n\n");
    scanf("%d",&n);
    printf("The multiplication table for %d is",n);
    for(int i=1;i<=10;i++)
        printf("\n %d x %d = %d",n,i,n*i);
    return 0;
}
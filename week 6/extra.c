#include<stdio.h>
void pasctri(int n);
int main()
{
    int n;
    printf("Enter the value of n = "); //taking input from the user
    scanf("%d",&n);
    pasctri(n);                       //passing the value entered by the user to the function
    return 0;
}
void pasctri(int n)
{
    int a[100][100];
    int i;int j;
    printf("The pascal triangle is:\n");
    for(i=1;i<=n;i++)
    {
        for(int z=0;z<(n-i);z++) printf(" ");		//it works similar to the basic code but i have added an additional for loop to get spaces
        for(j=1;j<=i;j++)
        {
            if(j==1 || j==i)
                a[i][j]=1;
            else
                a[i][j]=a[i-1][j]+a[i-1][j-1];
	    printf("%d  ",a[i][j]);
        }
        printf("\n");
    }
}
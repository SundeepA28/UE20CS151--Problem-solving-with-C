#include<stdio.h>
void pasctri(int n);
int main()
{
    int n;
    printf("Enter the value of n = "); //taking input from the user
    scanf("%d",&n);
    pasctri(n);                       //passing th e value entered by th euser to the function
    return 0;
}
void pasctri(int n)
{
    int a[10][10];
    int i,j;
    printf("The pascal triangle is:\n");
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=i;j++)
        {
            if(j==1 || j==i)  //storing 1 at the biggining and ending of the row
                a[i][j]=1;
            else
                a[i][j]=a[i-1][j]+a[i-1][j-1]; //adds the numbers which are in between and stores it in the array

            printf("%d ",a[i][j]);     //displays the value that is stored
        }
        printf("\n");
    }
}

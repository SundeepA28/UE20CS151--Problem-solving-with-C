#include<stdio.h>
int main()           //main
{
    int a[10][10];
    for(int i=0;i<5;i++)  	//outer loop
    {
        for(int j=0;j<5;j++)	//inner loop
        {
            if(i+j<4)
                a[i][j]=1;	//filling Upper left triangle with +1
            else if(i+j>=5)
                a[i][j]=-1;	//filling Lower right triangle with -1
            else
                a[i][j]=0;	//filling the diagonal with 0
            printf("%5d",a[i][j]); //printing the elements one by ine
        }
        printf("\n");
    }
    return 0;
}


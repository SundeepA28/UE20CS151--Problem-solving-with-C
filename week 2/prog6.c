#include<stdio.h>
int main()
{
    int d;int m;int y;int max;
    printf("Enter the date\n");
    scanf("%d",&d);
    printf("Enter the month\n");
    scanf("%d",&m);
    printf("Enter the year\n");
    scanf("%d",&y);
    if(m==1 || m==3 || m==5 || m==7 || m==8 || m==10 || m==12)
        max=31;
    else if(m==4 || m==6 || m==9 || m==11)
        max=30; 
    else if(y%4==0 && y%100!=0 || y%400==0)
        max=29;
    else
        max=28;

    if(m<1 || m>12)
        printf("Month is invalid\n");
    else if(d<1 || d>max)
        printf("Date is invalid\n");
    else if(d==max && m!=12)
    {
        d=1;
        m=m+1;
        printf("Date is valid and next date=%d/%d/%d",d,m,y);

    }
    else if(d==31 && m==12) 
    {
        d=1;
        m=1;
        y=y+1;
        printf("Date is valid and next date=%d/%d/%d",d,m,y);

    }
    else
    {
        d=d+1;
        printf("Date is valid and next date=%d/%d/%d",d,m,y);

    }   
    return 0;
}

#include<stdio.h>
int main()
{
    double n;
    printf("Enter the marks obtained to get the grade!!\n");
    scanf("%lf",&n);
    if(n>85 && n<=100)
        printf("Grade 'A'");
    else if(n>60)
        printf("Grade 'B'");
    else if(n>40)
    {
        printf("Grade 'C'");
    }
    else if(n>30)
        printf("Grade 'D'");
    else 
        printf("Fail!!\n");    
    return 0;
}
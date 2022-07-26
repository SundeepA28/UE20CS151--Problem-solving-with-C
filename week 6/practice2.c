#include<stdio.h>
struct inchfeet
{
    int feet;			//Structure is created to hold inches,feet
    float inches;
}typedef length;
length sum(length l1,length l2)
{
    length sum;
    sum.feet=l1.feet+l2.feet;		//adds the two feet
    sum.inches=l1.inches+l2.inches;	//adds the inches
    if(sum.inches>12)			//checks if inches >12
    {
        sum.inches-=12;			//inches-12
        sum.feet+=1;			//feet+1
    }
    return sum;
}
int main()
{
    length l1;
    length l2;
    length total;
    printf("Enter the first distance\n");	//inputs the first distance
    printf("Enter feet\n");
    scanf("%d",&l1.feet);
    printf("Enter inches\n");
    scanf("%f",&l1.inches);
    printf("Enter the second distance\n");	//inputs the second distance 
    printf("Enter feet\n");
    scanf("%d",&l2.feet);
    printf("Enter inches\n");
    scanf("%f",&l2.inches);
    total=sum(l1,l2);				//the two distances are passed to the function sum
    printf("The sum = %d feet-%.2f inch",total.feet,total.inches);
    return 0;
}



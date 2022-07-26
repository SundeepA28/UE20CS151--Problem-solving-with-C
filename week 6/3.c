#include<stdio.h>
typedef struct date{ 					//structure to to date
    int dd;
    int mm;
    int yy;
}date_info;					//typedef date_info
void date_read(date_info *d);			
void date_disp(const date_info *d);
int date_cmp(const date_info *d1,const date_info *d2);

int main()							//main
{
    date_info d1;						//d1 variable of date_info is created
    date_info d2;						//d2 variable of date_info is created

    printf("Enter a valid first date in the order dd|mm|yyyy\n");
    date_read(&d1);							//user defined function to read the date entered by the user
    printf("Enter a valid second date in the order dd|mm|yyyy\n");
    date_read(&d2);							//user defined function to read the date entered by the user
    printf("\nFirst date:");
    date_disp(&d1);							//user defined function to display the date entered by the user
    printf("\nSecond date:");
    date_disp(&d2);							//user defined function to display the date entered by the user
    printf("\n");

    int res;
    res=date_cmp(&d1,&d2);						//adresses of both the dates are passed to the function to compare the dates
    if(res==0)
        printf("The dates are equal\n");
    else if(res>0)
        printf("First date is greater than the second date\n");
    else
        printf("First date is smaller than the second date\n");
    return 0;
}

void date_read(date_info *d)
{
    scanf("%d|%d|%d",&(d->dd),&(d->mm),&(d->yy));		//date is stored in the structure
}

int date_cmp(const date_info *d1,const date_info *d2)
{
    int res;
    if((d1->dd==d2->dd) && (d1->mm==d2->mm) && (d1->yy==d2->yy)) //date 1 is compared with date 2
        res=0;							 //return 0 if they are equal
    else if( d1->yy > d2->yy)   				 //checking if date 1 is greater than date 2
        res=1;
    else if(d1->mm > d2->mm)
	res=1;
    else if(d1->dd > d2->dd)
	res=1;
    else
        res=-1;
    return res;
}
void date_disp(const date_info *d)
{
    printf("%d|%d|%d",d->dd,d->mm,d->yy);			//displays the date entered by the user
}


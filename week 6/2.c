#include<stdio.h>
void read(int a[10][10],int m,int n);
void disp(int a[10][10],int m,int n);
void sym(int a[10][10],int trans[10][10],int m,int n);
int main()                                                          //main
{
    int m,n;
    printf("Enter the value of rows and columns of the matrix\n");
    scanf("%d %d",&m,&n);
    int a[10][10];
    int trans[10][10];
    read(a,m,n);                                    //passing the size of the matrix to the read function 
    disp(a,m,n);				    //diplays the matrix entered by the user
    sym(a,trans,m,n);				    //Checks if the matrix entered by the user is symmertic or not,by finging th transpose of the matrix
    return 0;
}

void read(int a[10][10],int m,int n)               //user-defined read function to read the elements of the matrix
{
    printf("Enter the elements of the matrix\n");
    for(int i=0;i<m;i++)                          //outer loop
    {
        for(int j=0;j<n;j++)                      //inner loop
		scanf("%d",&a[i][j]);		  //storing the values in a[i][j]
    }
}
void disp(int a[10][10],int m,int n)              // user defined function to display the elements entered by the user
{
    printf("Entered elements of the matrix are :\n");
    for(int i=0;i<m;i++)                          //outer loop
    {
        for(int j=0;j<n;j++)			  //inner loop
            printf("%d  ",a[i][j]);		  //displays the element stored in a[i][j]
        printf("\n");				  //this is used to go to new row
    }
}
void sym(int a[10][10],int trans[10][10],int m,int n)  //User defined function to check if a matricx is symmetric or not
{
    int i;int j;
    for(i=0;i<m;i++)  				//outer loop
    {
        for(j=0;j<n;j++)			//inner loop
		trans[j][i]=a[i][j];		//finding the transpose of a the matrix and storing it in trans[][]
    }
    printf("The transpose matrix\n");
    for(i=0;i<m;i++)				//outer loop
    {
        for(j=0;j<n;j++)    			//inner loop
		printf("%d  ",trans[i][j]);		//displaying the transpose of a matrix
        printf("\n");				//to navigate to the  next row
    }
    if(m==n)					//checks if the number of rows and columns are equal
    {
        int count=0;
        for(i=0;i<m;i++)				//outer loop
		for(j=0;j<n;j++)			//inner loop
			if(a[i][j]!=trans[i][j])	//checks if matrix and its transpose are equal
				count=count+1;		//increments the count if thee elements are not equal
        if(count==0)
		printf("\nThe matrix is symmetric");   //prints symmertic if all the elements are equal
        else
            printf("\nThe matrix is not symmetric");
    }
    else
	printf("\nThe matrix is not symmetric");
}

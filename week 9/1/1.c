#include <stdio.h> 
#include <stdlib.h>
void read(FILE *fp1,FILE *fp2,FILE *fp3)
{ char c;
 while ((c = fgetc(fp1)) != EOF)		//read content from file1
 fputc(c, fp3);					//append the contents of file1 to file3
 while ((c = fgetc(fp2)) != EOF)		//read content of file2
 fputc(c, fp3);					//append the contents of file2 to file3
}
int main()
{ 
 char a[10],b[10],c[10];
 printf("Enter the 1st file name: ");		//storing file1 name in a 
 scanf("%s",a);
 printf("Enter the 2nd file name: ");		//storing file2 name in b
 scanf("%s",b);
 printf("Enter the file name to merge contents of prev files: ");
 scanf("%s",c);
 FILE *fp1 = fopen(a, "r");
 FILE *fp2 = fopen(b, "r"); 
 FILE *fp3 = fopen(c, "a"); 
 if (fp1 == NULL || fp2 == NULL || fp3 == NULL)
 {
 puts("Could not open files");
 exit(0);
 }
 read(fp1,fp2,fp3);				//user defined function to read and display
 printf("The %s and %s merged into %s file",a,b,c); 
 fclose(fp1);
 fclose(fp2);					//closing the files
 fclose(fp3);
 return 0;
}
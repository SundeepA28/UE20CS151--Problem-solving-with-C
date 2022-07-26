#include<stdio.h>
#include<string.h>
#include<stdlib.h>
struct student             //struct to store roll_no and name
{
	int roll_no;	
	char name[100];
};
typedef struct student STUDENT_T;
void display(STUDENT_T* p[],int n);
void swap(STUDENT_T **p,STUDENT_T **q);
void init_ptr(STUDENT_T s[],STUDENT_T* p[],int n);
void sort_data(STUDENT_T* p[],int n,int (*)(const STUDENT_T*,const STUDENT_T*));
int cmp_roll_no(const STUDENT_T*,const STUDENT_T*);
int cmp_name(const STUDENT_T*,const STUDENT_T*);

int main()
{
	FILE *f1 = fopen("student.csv","r");
	if(f1 == NULL)
	{
		perror("cannot open the file");
	}
	else
	{
		STUDENT_T st[1000];
		char line[100];
		fgets(line,100,f1);
		int i = 0;
		while(fgets(line,100,f1) != NULL)
		{
			fputs(line,stdout);			//displays the contents of the filee on terminal
			char *r = strtok(line,",");		//store teh roll_no
			char *name = strtok(NULL,",");		//store teh name
			st[i].roll_no = atoi(r);		//converting string to int
			strcpy(st[i].name,name);
			i++;		
		}
		int n = i;
		fclose(f1);
		STUDENT_T *p[1000];
		init_ptr(st,p,n);
		int ch;
		printf("enter your choice 1: sort on roll_no 2. sort on name\n");
		scanf("%d",&ch);
		switch(ch)
		{
			case 1:sort_data(p,n,cmp_roll_no);display(p,n);break;  //sort based on roll_no
			case 2:sort_data(p,n,cmp_name);display(p,n);break;	//sort based on name
			default: exit(0);
		}
	}
	return 0;
}
int cmp_roll_no(const STUDENT_T* s1,const STUDENT_T* s2)  //compare roll_no
{
		return s1->roll_no >s2->roll_no;
}
int cmp_name(const STUDENT_T* s1,const STUDENT_T* s2)  //compare name
{
	return strcmp(s1->name,s2->name)>0;
}
void init_ptr(STUDENT_T s[],STUDENT_T* p[],int n)
{
	int i;
	for(i = 0;i<n;i++)
		p[i] = &s[i];
}
void display(STUDENT_T* p[],int n)  //display
{
	int i;
	for(i = 0;i<n;i++)
		printf("%d %s\n",p[i]->roll_no,p[i]->name);
}
void sort_data(STUDENT_T* p[],int n,int (*op)(const STUDENT_T*, const STUDENT_T*) )  //bubble sort
{
	int i,pos,j;
	for(i = 0;i<n-1;i++)
		for(j = 0;j<n-1;j++)  
			if(op(p[j],p[j+1]))
				swap(&p[j],&p[j+1]);

}
void swap(STUDENT_T **p,STUDENT_T **q)   //swap function
{
	STUDENT_T *temp = *p;
	*p = *q;
	*q = temp;
}

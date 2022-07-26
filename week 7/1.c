#include<stdio.h>
#include<conio.h>
#include<string.h>
				//structure for holding players details
struct cricket{
	char pname[20];
	char tname[20];
	float bavg;
};
typedef struct cricket crick;
void readp(crick *p);
void teamsort(crick *p);
void displayp(crick *p);
int main()
{
	crick player[5];
	readp(player);
	printf("BEFORE TEAM WISE SORTING\n\n");
	displayp(player);
	teamsort(player);
	printf("AFTER TEAM  WISE SORTING\n\n");
	displayp(player);
	return 0;	
}
					//Input function
void readp(crick *p)
{
	printf("ENTER THE DATA OF 5 PERSONS:\n");
	for(int j=0;j<5;j++)
	{
		printf("ENTER PLAYERname TEAMname BATTINGaverage FOR PLAYER- %d=",j+1);
		scanf("%s",&p[j].pname);
		scanf("%s",&p[j].tname);
		scanf("%f",&p[j].bavg);
	}
}
				//Sorting function based on teams name
void teamsort(crick *p)
{
	crick temp;
	for(int j=0;j<5;j++)
	{
		for(int k=0;k<4-j;k++)
		{
			if(strcmp(p[k].tname,p[k+1].tname)>0)
			{
				temp=p[k];
				p[k]=p[k+1];
				p[k+1]=temp;
			}
		}
	}
}
				//Display function
void displayp(crick *p)
{
	for(int j=0;j<5;j++)
	{
		printf("%s\t %s\t\t %.2f\n",p[j].pname,p[j].tname,p[j].bavg);
	}
}

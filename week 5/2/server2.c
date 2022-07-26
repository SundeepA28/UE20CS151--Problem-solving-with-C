#include<stdio.h>
#include<string.h>
#include"header1.h"
void replacechar(char *s,char c1,char c2)
{
	for(int i=0;s[i];i++)
		if(s[i]==c1) 
			s[i]=c2;
}
			
#include"server_strcat.h" 
void my_str_cat(char *d,const char *s)
{
	while(*d)
		d++;
	while(*d++=*s++);
}
char* my_strcat(char *d1,const char *s1,int n)
{
	for(int i=0;i<n;i++)
		my_str_cat(d1,s1);
	return d1;
}
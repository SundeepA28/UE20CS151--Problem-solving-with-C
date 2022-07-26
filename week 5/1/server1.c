#include"1.h"
void reverse_string(const char*s1,char *s2)
{
	int len = 0;
	while(*s1!='\0')
	{
		++s1;
		++len;
	}
	while(len>=0)
	{
		*s2++ = *(--s1);
		len--;
	}
	*s2='\0';
}
int check_equal(char *s1,char *s2)
{
	while(*s1 && *s2 && *s1 == *s2)
	{
		++s1; ++s2;
	}
	return *s1 - *s2;
}




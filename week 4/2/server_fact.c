#include"server_fact.h"
int fact(int n)
{
	return (n==0)?1:n*fact(n-1);
}
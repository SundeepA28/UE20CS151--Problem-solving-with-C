#include<stdio.h>
int main()
{
    char ch;
    while((ch=getchar())!='\n')
    {
        if(ch>='a' && ch<='z')
            ch=ch+'A'-'a';
        putchar(ch);
    }
    return 0;
}
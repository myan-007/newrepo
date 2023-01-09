#include<stdio.h>
int main()
{
    char c[20],d[10];
    gets(c);
    gets(d);
    char *p1,*p2;
    p1=c;
    p2=d;
    while (*p1)
    {
        p1++;
    }
    while (*p2)
    {
        *p1=*p2;
        p2++;
        p1++;
    }
    *p1='\0';
    printf("%s",c);

    

    return 0;
}
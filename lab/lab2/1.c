#include<stdio.h>
int len(char a[]);
int main()
{
    char a[100];
    int i=0;
    gets(a);
    i=len(a);
    printf("%d",i);
}
int len(char ar[])
{
    int i;
    while(ar[i]!='\0')
    {
        i++;
    }
    return i;
}

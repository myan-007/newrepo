#include<stdio.h>
#include "func.h"
int main()
{
    char a[100];
    int x[100];
    gets(a);
    for (int i = 0; i < len(a); i++)
    {
        x[i]=a[i];
    }
    for (int i = 0; i < len(a); i++)
    {
        printf("%d ",x[i]);
    }
    int n=len(a);
    sort(x,n);
    for (int i = 0; i < len(a); i++)
    {
        printf("%d ",x[i]);
    }
    for (int i = 0; i < len(a); i++)
    {
        a[i]=x[i];
        // printf("%c",a[i]);
    }
    puts(a);
    return 0;
}
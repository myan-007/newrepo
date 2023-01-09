#include<stdio.h>
#include "func.h"
int main()
{
   char a[100];
   int j,f=0;
   gets(a);
   j=len(a)-1;
    for (int i = 0; i < len(a)/2; i++)
    {
        if(a[i]!=a[j])
        {
            f=1;
        }
        j--;
    }
    if(f==1)
    {
        printf("Not");
    }
    else
    {
        printf("yes");
    }
    
    return 0;
}
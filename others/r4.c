#include<stdio.h>
#include<string.h>
int main()
{
    char a[51],b[51];
    int n;
    scanf("%s",a);
    n=strlen(a);
    n=n%2==0?(n/2)-1:n/2;
    b[0]=a[n];
    for (int i = 1,o=1,e=2; i < strlen(a); i++)
    {
        if (i%2==0)
        {
             b[i]=a[n-e];
             n=n-e;
             e+=2;
        }
        else
        {
           b[i]=a[n+o];
          n=n+o;
          o+=2;
        }
    }
    for (int i = 0; i < strlen(a); i++)
    {
        printf("%c",b[i]);
    }
    
    return 0;

}
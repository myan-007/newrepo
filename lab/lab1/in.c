#include<stdio.h>
int main()
{
    int a[100],i,n,p,x,t;
    printf("Enter the matrice :");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
       scanf("%d",&a[i]);   
    }
    printf("Enter the position and number :");
    scanf("%d %d",&p,&x);
    for(i=n-1;i>p-2;i--)
    {
        a[i+1]=a[i];
    }
    a[p-1]=x;
    for(i=0;i<n+1;i++)
    {
       printf("%d ",a[i]);   
    }
    return 0;
    }
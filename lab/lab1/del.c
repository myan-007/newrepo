#include<stdio.h>
int main()
{
    int i,j,n,p;
    int a[100];
    printf("Enter the number :");
    scanf("%d",&n);
    printf("Enter the position :");
    scanf("%d",&p);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=p-1;i<(n-1);i++)
    {
        a[i]=a[i+1];
    }
    
    for(i=0;i<n-1;i++)
    {
       printf("%d ",a[i]);   
    }

    for(i=0;;)
    return 0;
}
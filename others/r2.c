#include<stdio.h>
int main()
{
    int n;
    int a[10];
    scanf("%d",&n);
    for (int i = 0; i < n; i++)
    {
        scanf("%d",&a[i]);
    }
    
    int t;
    for (int i = 0; i < n-1; i++)
    {
        for(int j=0;j<n-i-1;j++)
        {
            if (a[j]>a[j+1])
            {
                t=a[j+1];
                a[j+1]=a[j];
                a[j]=t;
            }
        }
    }
    int max=0;
    max=a[n-1];
    for (int i = 0; i <n; i++)
    {
        if (a[i]<max)
        {
            t=a[i];
        }
        
    }
    
    printf("%d",t);
    return 0;

}
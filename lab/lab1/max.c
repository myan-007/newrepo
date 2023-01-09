#include<stdio.h>
int main()
{   int i,j,n,t;
    int ar[100],c[20]={0};
    printf("Enter the number ");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&ar[i]);
    }
    for(i=0;i<n;i++)
    {   
        for(j=0;j<n;j++)
        {
            if(ar[i]>ar[j])
            {
                c[i]+=1;
            }
        }
        if(c[i]==(n-1))
        {
            printf("%d",ar[i]);
        }    
    }
    return 0;
}
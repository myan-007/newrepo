#include <stdio.h>
int main()
{
    int a[100][100];
    int n,diff=0;
    int i,j;
    unsigned int sum1=0,sum2=0;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            if(i==j)
            {
                sum1=sum1+a[i][j];
            }
            
        }
    }
    printf("%d ",sum1);
    j=n-1;
    for(i=0;i<n;i++)
    {
        sum2=sum2+a[i][j];
       j--;
    }
    printf("%d ",sum2);
    
    diff=sum1-sum2;
    if(diff>0)
    printf("%d",diff);
    else{
        diff= -1 * diff;
        printf("%d",diff);
    }
    return 0;
}
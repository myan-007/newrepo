#include<stdio.h>
int main()
{
    int a[100][100],ar[100],sum1=0,sum2=0,ans=0,t;
    scanf("%d",&t);
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j <3; j++)
        {
            scanf("%d",&a[i][j]);
            if(a[i][j]>=t)
            {
                ans++;
            }
        }
    }
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0,k=1; j <2; j++,k++)
        {
            sum1=sum1+a[j][i];
            sum2=sum2+a[k][i];
        }
        a[0][i]=sum1;
        a[1][i]=sum2;
        sum1=sum2 =0;
    }
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0,k=1; j <2; j++,k++)
        {
            sum1=sum1+a[i][j];
            sum2=sum2+a[i][k];
        }
        a[i][0]=sum1;
        a[i][1]=sum2;
        sum1=sum2 =0;
    }


    for (int j = 0; j <2; j++)
        {
           for (int i = 0; i < 2; i++)
           {
               if (a[j][i]>=t*4)
               {
                   ans++;
               }
               
           }
           
        }
        
        printf("%d",ans);
    
    return 0;
}

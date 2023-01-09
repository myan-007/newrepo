#include <stdio.h>
void prt(int a[100][100],int n,int m)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j <m; j++)
        {
            printf("%d ",a[i][j]);
            
        }
        printf("\n");
    }
}
int main(void) {
    long long int t=0;
    scanf("%lld",&t);
    while(t--)
    {
        int a[100][100],sum1=0,sum2=0,ans=0,l;
        int n,m;
        int c;
        int x;
    scanf("%d %d %d",&n,&m,&l);
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j <3; j++)
        {
            scanf("%d",&a[i][j]);
            if(a[i][j]>=l)
            {
                ans++;
            }
        }
    }
    
    for(int x=0;x<n-1;x++)
    {
    for (int i = 0; i < m; i++)
    {
       
        for (int j = x,k=x+1; j <x+2; j++,k++)
        {
            sum1=sum1+a[j][i];
            // sum2=sum2+a[k][i];
        }
        a[x][i]=sum1;
        // a[1][i]=sum2;
        sum1=sum2 =0;
    }
    }
    prt(a,n-1,m);
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
               if (a[j][i]>=l*4)
               {
                   ans++;
               }
               
           }
           
        }
        
        printf("%d",ans);
        
    }

	return 0;
}


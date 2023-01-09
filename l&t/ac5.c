#include <stdio.h>
int avg(int a[],int n)
{
    int sum=0;
    for (int i = 0; i < n; i++)
    {
        sum+=a[i];
    }
   return sum/n; 
}
int main(void) {
    long long int t=0;
    scanf("%lld",&t);
    while(t--)
    {
        long long n,m,k,c=0,ar[100][100];
        int ans=0;
        scanf("%lld %lld %lld",&n,&m,&k);
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < m; j++)
            {
                scanf("%lld",&ar[i][j]);
            }
        }
        c=m==n?m:(m>n)?m:n;
        int r;
        for (int i = 1; i <= n; i++)
        {
             for (int j = 0; j < m; j++)
             {
                 if(ar[i][j]>=k)
                 {
                    ans++;
                 }
             }
        }
        printf("%lld\n",c);
        printf("%d\n",ans);
    }

	return 0;
}



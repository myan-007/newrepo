#include<stdio.h>

long long int sum(long long int aux[110][110],long long int i1,long long int j1,long long int i2,long long int j2);
int main()
{
    long long int a[110][110]={0};
    long long int aux[110][110]={0};
    int t;
    scanf("%d",&t);
    while (t--)
    {
        long long n,m,k;
        long long ans=0;
        long long i,j,l,c;
        long long rs=0;
        scanf("%lld %lld %lld",&n,&m,&k);
        for ( i = 0; i < n; i++)
        {
            for (j = 0; j <m; j++)
            {
                scanf("%lld",&a[i][j]);
                if (a[i][j]>=k)
                {
                   ans++;
                }
            }
            
        }
        aux[0][0]=a[0][0];
        for ( i = 1; i < m; i++)
        {
           aux[0][i]=aux[0][i-1]+a[0][i];
        }
        for (i = 1; i <= n; i++)
        {
            aux[i][0] = a[i+1][0] + aux[i][0];
        }
        for (i = 1; i < n; i++)
        {
            for ( j = 0; j < m; j++)
            {
                aux[i][j]=aux[i-1][j]+aux[i][j-1]+a[i][j]-aux[i-1][j-1];
            }
            
        }
        
        c=n==m?n:n-1;
        
        // for (  l= 1; l < c; l++)
        // {
        //    for (i = 0; i < n-l; i++)
        //     {
        //         for ( j = 0; j < m-l; i++)
        //         {
        //             long long i1,j1,i2,j2;
        //             i1=i;j1=j;
        //             i2=i+l;j2=j+l;
        //             rs=aux[i2][j2];
        //             // printf("%lld",aux[i2][j2]);
        //             // printf("%lld -->",rs);
        //             if (j1>0)
        //             {
        //               rs-=aux[i2][j1-1];  
        //             }
        //             if (i1>0)
        //             {
        //                 rs-=aux[i1-1][j2];
        //             }
        //             if (i1>0 && j1>0)
        //             {
        //                 rs+=aux[i1-1][j1-1];
        //             }
        //             // rs=sum(i,j,i+l,j+l);
        //             printf("%lld ",rs);
        //             // if (rs>=(k*(l+1)*(l+1)))
        //             // {
        //             //     printf("true ");
                        
        //             //     ans = ans + ((m-l)-j);
        //             //     printf("ans %lld ",ans);
        //             //     break;
        //             // }
        //         }
            
        //     }
        // }
        long long int x = 0;
        for (l = 1; l < c; l++)
        {
            for (i = 0 ; i < n-l; i++)
            {
                
                for (j = 0 ; j < m-l; j++)
                {
                    x = sum( aux,i , j , i+l, j+l);
                    
                    
                    if (x >= (k * (l+1)*(l+1)))
                    {
                        ans=(long long)(ans+(m-l)-j);
                       break;   
                    }
                }
                
            }
        }
        for ( i = 0; i < n; i++)
        {
            for ( j = 0; j < m; j++)
            {
               printf("%lld ",aux[i][j]);
            }
            printf("\n");
        }
        
       printf("%lld",ans); 
        
        
    }
    
    return 0;

}
long long int sum(long long aux[110][110],long long int i1,long long int j1,long long int i2,long long int j2)
{
    long long int rs = aux[i2][j2];
   if (j1 > 0)
{
    rs -= aux[i2][j1 - 1];
}
if (i1 > 0)
{
    rs -= aux[i1 - 1][j2];
}
if (i1 > 0 && j1 > 0)
{
    rs += aux[i1 - 1][j1 - 1];
}
return rs;
}
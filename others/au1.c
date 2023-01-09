#include <stdio.h>
void convert(long long int a[100][100],long long int b[100][100], long int n, long int m)
{
    b[0][0] = a[0][0];
    for (long long int i = 1; i <= n; i++)
    {
        b[i][0] = a[i][0] + b[i - 1][0];
    }
    for (long long int i = 1; i <= m; i++)
    {
        b[0][i] = a[0][i] + b[0][i - 1];
    }
    for (long long int i = 1; i <= n; i++)
    {
        for (long long int j = 0; j <= m; j++)
        {
            b[i][j] = a[i][j] + b[i][j - 1] + b[i - 1][j] - b[i - 1][j - 1];
        }
    }
}

long long int sum(long long int a[100][100],long int i1,long int j1,long int i2,long int j2)
{
    long long int rs = a[i2][j2];
   if (j1 > 0)
{
    rs -= a[i2][j1 - 1];
}
if (i1 > 0)
{
    rs -= a[i1 - 1][j2];
}
if (i1 > 0 && j1 > 0)
{
    rs += a[i1 - 1][j1 - 1];
}

        
    return rs;
}

int main()
{
    int t;
    long long int rs[10];
    int v;
    
    scanf("%d", &t);
    v=t;
    while (t!=0)
    {
        long long int a[100][100]={0}, ans = 0;
        long long int aux[100][100]={0};
        long int n, m, k;


        scanf("%ld %ld %ld", &n, &m, &k);
        long int c;
        c = (n == m) ? n : (n > m) ? m: n;

        for (long long int i = 0; i < n; i++)
        {
            for (long long int j = 0; j < m; j++)
            {
                scanf("%lld", &a[i][j]);
                if (a[i][j] >= k)
                {
                    ans++;
                }
            }
        }
        convert(a, aux, n, m);
        
        long long int x = 0;
        for (long long int l = 1; l < c-1; l++)
        {
            for (long long int i = 0 ; i < n-l; i++)
            {
                
                for (long long int j = 0 ; j < m-l; j++)
                {
                    x = sum(aux, i , j , i+l, j+l);
                    
                    
                    if (x >= (k * (l+1)*(l+1)))
                    {
                        ans=ans+(m-l)-j;
                       break;   
                    } 
                }
                
            }
        }
        
        rs[t]=ans;
        
        
        ans=0;
        t--;
    }
     for (int i = v; i>=1;i--)
    {
       
        printf("%lld\n",rs[i]);
    }
    
    return 0;
}

#include<stdio.h>
void convert(int a[1000][1000],int b[1000][1000],int n,int m)
{
    b[0][0]=a[0][0];
    for (int i = 1; i <=n; i++)
    {
        b[i][0]=a[i][0]+b[i-1][0];
    }
    for (int i = 1; i <=m; i++)
    {
        b[0][i]=a[0][i]+b[0][i-1];
    }
    for (int i = 1; i <=n; i++)
    {
        for (int j = 0; j <=m; j++)
        {
          b[i][j]=a[i][j]+b[i][j-1]+b[i-1][j]-b[i-1][j-1];
        }
        
    }
}
int sum(int a[1000][1000],int i1,int j1,int i2,int j2,int n,int m)
{
 int rs=a[i2][j2];
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j <m; j++)
        {
            
            if (j1>0)
            {
               rs-=a[i2][j1-1]; 
            }
            if (i1>0)
            {
                rs-=a[i1-1][j2];
            }
            if (i1>0 && j1>0)
            {
                rs+=a[i1-1][j1-1];
            }
            
            
        }
        
    }
    return rs;
}
int main()
{
    int t;
    int rs[10];
    scanf("%d",&t);
    int v;
    v=t;
    while(t!=0)
    {
    int a[1000][1000],ans=0;
    int aux[1000][1000];
    int n,m,l;
    
    scanf("%d %d %d",&n,&m,&l);
    int c;
    c=(n==m)?n:(n>m)?m:n;
    
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j <m ; j++)
        {
       scanf("%d",&a[i][j]);  
       if (a[i][j]>=l)
       {
           ans++;
           
       }
          
        }
    }
    convert(a,aux,n,m);

    int x=0;
    for (int k= 1; k <c; k++)
    {
        for (int i = 0+k; i < n; i++)
        {
            for (int j = 0+k; j <m; j++)
            {
                x=sum(aux,i-k,j-k,i,k,n,m);
                if(x >= (l*k))
                {
                    ans++;
                    ans=ans+(m-l)-j;
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

#include <stdio.h>


void graph(long int);
int main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
        long int n,e,s,i,j;
        scanf("%ld %ld",&n,&e);
        long int ar[e][2],f[n+1];
        long int l[1002]={0};
        for (i = 0; i <e ; i++)
        {
            for (j = 0; j < 2; j++)
            {
                scanf("%ld",&ar[i][j]);
            }

        }
        scanf("%ld",&s);
        l[s]=0;
        for ( i = 0; i < e; i++)
        {   f[ar[i][1]]=1;
            if (l[ar[i][0]!=l[ar[i][1]]])
            {
                l[ar[i][1]]=l[ar[i][0]]+1;
            }
            
            
        }
    
       
        for ( i = 1; i <= n; i++)
        {
          l[i]=l[i]*6;
          if (l[i]==0 && i!=s)
          {
              l[i]=-1;
          }
          if (i!=s)
          {
              printf("%ld ",l[i]);
          }
          
        }
          printf("\n");
                
    }
return 0;
}

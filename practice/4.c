#include<stdio.h>
#define N 5
int main()
{int k,ar[N][N],sumr[2][5]={0};
    for (int i=0;i<N;i++)
    { printf("Enter Row %d: ",i+1);
        for(int j=0;j<N;j++)
        {
           
            scanf("%d",&ar[i][j]);
        }
    }
    for(int k=0;k<2;k++)
    {
    for (int i=0;i<N;i++)
    { 
        for(int j=0;j<N;j++)
        {  if(k==0)
           sumr[k][i]=sumr[k][i]+ar[i][j];
           else
           sumr[k][i]= sumr[k][i]+ar[j][i];
        }
    }
    }
    
    for (int i=0;i<2;i++)
    { 
        for(int j=0;j<N;j++)
        {
           printf("%d ",sumr[i][j]);
          
        }
        printf("\n");
    }

    return 0;
}
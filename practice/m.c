#include<stdio.h>
int main()
{
   int i,j,s;
   int k=2;

   for(i=0;i<=5;i++)
   {if(i<=3)
        {   
            for (s=1;s<=3-i;s++)
            printf(" ");
            for (j=1;j<=i;j++)
            printf("%d",j);
            for(j=i-1;j>=1;j--)
            printf("%d",j); 
            
        printf("\n");
        }
    else
    {     for(int S=1;S<i-2;++S)
            printf(" ");
           for (j=1;j<=i-k;j++)
            printf("%d",j);
            for(j=(i-k)-1;j>=1;j--)
            printf("%d",j); 
        printf("\n");
            k=k+2;
          }
}
   return 0; 
}
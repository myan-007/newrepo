#include<stdio.h>
int main()
{
   int i,j,s,e;
   scanf("%d",&e);
   for(i=1;i<=(2*e-1);i++)
   {if(i<=e)
        {   
            for (s=e-1;s>=i;s--)
            printf(" ");
            for (j=1;j<=i;j++)
            printf("* ");
            printf("\n"); 
        }
    else
    {
            for(int S=1;S<=i-e;++S)
            printf(" ");
            for(int J=e-1;J>=i-e;J--)
                printf("* ");
    printf("\n");

          }
}
   return 0; 
}

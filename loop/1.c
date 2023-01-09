#include<stdio.h>
int main()
{int i,e;
scanf("%d",&e);
for(int j=1;j<=e;j++)
       { 
         for(int b=e-1;b>=j;--b)
          printf(" ");
            for (i=1;i<=j;++i)    
            printf("* ");
        
       printf("\n");
       }
   return 0;
}

#include<stdio.h>
int main()
{
//     int i1,e;
// scanf("%d",&e);
// for(int j1=1;j1<=e;j++)
//        { 
//          for(int b=e-1;b>=j;--b)
//           printf(" ");
//             for (i1=1;i1<=j1;++i1)    
//             printf("* ");
        
//        printf("\n");
//        }
//    return 0;
    int i,j,e;
    scanf("%d",&e);
    for (i=e;i>=0;i--)
    {
        for(int s=e;s>i;s--)
        {
            printf(" ");
        }
            for(j=1;j<=i;j++)
            {
            printf("* ");
            }
        
    printf("\n");
}
return 0;
}
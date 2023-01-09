#include<stdio.h>

int main()
{ int m1[10][10],m2[10][10],r[10][10]={0};
    int i,j,r1=3,c1=3,r2=3,c2=3,k,sum=0;
    printf("Enter the rows and columns of the matrix 1 :");
    scanf("%d",&r1);
    scanf("%d",&c1);
    printf("Enter the element of matrix 1 :");
    for(i=0;i<r1;i++)
    {
        for(j=0;j<c1;j++)
        {
            scanf("%d",&m1[i][j]);
        }
    }
    for (i=0;i<r1;i++)
    { 
        for(j=0;j<c1;j++)
        {
           printf("%d ",m1[i][j]);
          
        }
        printf("\n");
    }
    printf("Enter the rows and columns of the matrix 2 :");
    scanf("%d",&r2);
    scanf("%d",&c2);
    if(r1!=c2)
    {
        printf("invalid task");
    }
    else
    {
    printf("Enter the element of matrix 2 :");
    for(i=0;i<r2;i++)
    {
        for(j=0;j<c2;j++)
        {
            scanf("%d",&m2[i][j]);
        }
    }
    for (i=0;i<r2;i++)
    { 
        for(j=0;j<c2;j++)
        {
           printf("%d ",m2[i][j]);
          
        }
        printf("\n");
    }
    printf("answer is :\n");
        for(i=0;i<c1;i++)
        {   
            for(j=0;j<r2;j++)
            {
                
               for(k=0;k<r1;k++)
            {
                sum += m1[i][k]*m2[k][j];
                
            }
            r[i][j]=sum;
            sum=0;
            }
            
        }
    }
    for(i=0;i<c1;i++)
    {
        for(j=0;j<r2;j++)
        {
            printf("%d ",r[i][j]);
        }
        printf("\n");
    }
    return 0;
}


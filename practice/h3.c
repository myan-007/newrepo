#include<stdio.h>
int main()
{
    int s,i,j;
    int n;
    scanf("%d",&n);
    for(i=0;i<=n;i++)
    {
        for(s=n-1;s>=i;s--)
        {
            printf(" ");
        }
        for(j=0;j<i;j++)
        {
            printf("#");
        }
        printf("\n");
    }
    
    return 0;
}
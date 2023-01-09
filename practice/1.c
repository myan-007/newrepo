#include<stdio.h>
#define N 5
int main()
{   int arr[N],i;
    for(i=0;i<N ;i++)
    {
    scanf("%d",&arr[i]);
    }
    for(i=N-1;i>=0;i--)
    {
        printf("%d ",arr[i]);
    }
    return 0;
}
#include<stdio.h>
#define N 10
int main()
{
    int n,r,ar[N]={0};
    scanf("%d",&n);
    while (n>0)
    {
       r=n%10;
       if(ar[r]==1)
          break;
       ar[r]=1;
       n=n/10; 
    }
    if (n>0)
    {
        printf("YES");
    }
    else{
        printf("NO");
    }
    
    return 0;
}
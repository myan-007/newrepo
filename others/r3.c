#include<stdio.h>

int main()
{
    long int n,r;
    long int a[100000];
    long int j;
    scanf("%ld %ld",&n,&r);
    for (j =n-r; j < n; j++)
    {
      scanf("%ld",&a[j]);  
    }
    for(j=0;j<n-r;j++)
    {
      scanf("%ld",&a[j]);  
    }
    
    
   
    
    for (i = 0; i < n; i++)
    {
        printf("%ld ",a[i]);
    }
    
    
    
    return 0;

}
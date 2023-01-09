#include<stdio.h>


int main()
{ 

    int n=0,e;
    float x,sum;
    scanf("%d",&e);
    for(n=1;n<=e;n++)
    {  if(n==e)
        printf("1/%d=",n);
        else
       { printf("1/%d+",n);
        }
    x=1.0/n;
    sum=sum+x;
    
    }
    printf("%f",sum);
    
    return 0;

}
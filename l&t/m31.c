#include<stdio.h>
#include<math.h>
int main()
{
   
    int t;
    scanf("%d",&t);
    while (t--)
    {
        long long int x;
        long long int c=0;
        scanf("%lld",&x);
        for (long long int i = 0; i <= pow(2,x)-1 ; i++)
        {
            if((i^(i+1))==((i+2)^(i+3)))
            {
                c++;
            }
        }
        long long int p=pow(10,9)+7;
        printf("%lld\n",c%p);
            
    }
    
    return 0;
}
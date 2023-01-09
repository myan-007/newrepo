#include <stdio.h>

int main(void) {
    int t;
    scanf("%d",&t);

    while(t!=0)
    {
        long long int n,x,k,i;
        // int  c[1000];
        scanf("%lld %lld %lld",&n,&x,&k);
        if(x%k==0)
        {
            printf("YES\n");
        }
        else
        {
            printf("NO\n");
        }
        // for(i=0;i<=n/k;i++)
        // {
        //     c[i]=k*i;
        // }
        --t;
        
    }


	return 0;
}


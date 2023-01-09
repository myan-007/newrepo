#include <stdio.h>

int main(void) {
	long long int t;
	scanf("%lld",&t);
	while(t--)
	{
	    int h=0,f=0,i,ans;
	    long int n;
	    scanf("%ld",&n);
	    if(n>3)
	    {f=n/4;
	    }
	    i=n%4;
	    if(i==2)
	    {
	       h=2*2;
	    }
	    if(i==3)
	    {
	       h=(2*2)+(5*1);
	    }
	   // h=h+n*1+(f*8);
	   if(f>0)
	   ans=(21*n)-(h+n*1+(f*4*5)+i*4);
	   else
	   ans=(21*n)-(h+n*1+(f*4*5));
	   // printf("%d-%d+%d ",21*n,h+n*1,f*4*5);
	    printf("%d\n",ans);
	}
	return 0;
}


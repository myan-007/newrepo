#include <stdio.h>

int main(void) {
	long long int t;
	scanf("%lld",&t);
	while(t--)
	{
	    int h=0,f=0,i,ansa=0,ansb=0,r=0;
	    long int n;
	    scanf("%ld",&n);
	    f=n/4;
        i=n%4;
        if(i==1)
            h=r=1;
        if(i==2)
            h=2;
        if(i==3)
            h=2;

        ansa=6*f*4+5*f*4+4*f*(4-i);
        ansb=6*i+5*i+4*i+3*h+2*r;
        printf("%d\n",ansa+ansb);
	}
	return 0;
}


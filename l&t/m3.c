#include <stdio.h>
long long int result(long long int x, long long int y)
{
	long long int rs = 1;	
    long long int p=(10e8)+7;
    printf("%lld\n",p);
    

	while (y > 0)
	{
		
		if (y & 1)
			rs = (rs*x)%p;

		
		y = y>>1; 
		x = (x*x)%p; 
	}
	return rs;
}


int main()
{

    long long int t;
    scanf("%lld", &t);
    while (t--)
    {
        long long int n;
        scanf("%lld", &n);
        n=n-1;
        printf("%lld\n",result(2,n));
    }
    return 0;
}
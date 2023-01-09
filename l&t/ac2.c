#include <stdio.h>

int main(void)
{
	short int t, c = 0;
	int r[100];
	scanf("%hd", &t);
	int x=t;
	while (t!=0)
	{
		t--;
		int n, k, ans = 0;
		scanf("%d %d", &n, &k);
		char a[1000];
		scanf("%s", a);
		for (int i = 0; i < n; i++)
		{
			if (a[i] == '*')
			{
				ans++;
			}
			else
			{
				ans=0;
			}
			
			if (ans >= k)
			{
				c++;
				break;
			}
			
		}
		if (c > 0)
		{
			r[t]=1;
			
		}
		else
		{
			r[t]=0;
			
		}
		c=0;
	}
	
	for (int i = x-1; i >=0 ; i--)
	{
		if(r[i]==1)
		{
			printf("yes\n");
		}
		else
		{
			printf("no\n");
		}
	
}

return 0;
}


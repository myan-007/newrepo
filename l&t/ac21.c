#include <stdio.h>

int main(void)
{
	int t, c = 0;
// 	int r[100];
	scanf("%d", &t);
// 	int x=t;
	while (t!=0)
	{
		t--;
		long int n, k, ans = 0;
		scanf("%ld %ld", &n, &k);
		char a[1000];
		scanf("%s", a);
		for (int i = 0; i < n; i++)
		{
			if (a[i] == '*')
			{
				for (int j = i; j <= i + k - 1; j++)
				{
					if (a[j] == '*')
					{
						ans++;
					}
				}
				
			}
			if (ans == k)
			{
				c++;
				break;
			}
			ans = 0;
		}
		if (c > 0)
		{
		printf("yes\n");
			
		}
		else
		{
			
		printf("no\n");	
		}
		c=0;
	}
	
// 	for (int i = x-1; i >=0 ; i--)
// 	{
// 		if(r[i]==1)
// 		{
// 			printf("yes\n");
// 		}
// 		else
// 		{
// 			printf("no\n");
// 		}
	
// }

return 0;
}


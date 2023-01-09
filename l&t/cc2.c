#include <stdio.h>
#include <math.h>
#define N 100000
int main()
{
    long long int n;
    long long int c;
    int u[N], v[N], a[N], s[N], f[N] = {0};
    scanf("%lld", &n);
    for (int i = 0; i < n; i++)
    {
        scanf("%d %d %d %d", &u[i], &v[i], &a[i], &s[i]);

        c = sqrt(u[i] * u[i] + 2 * a[i] * s[i]);

        if (v[i] >= c)
        {
            f[i] = 1;
        }
    }
    for (int i = 0; i < n; i++)
    {
        if (f[i] == 1)
        {
            printf("Yes\n");
        }
        else
        {
            printf("No\n");
        }
    }

    return 0;
}


#include <stdio.h>
int max(int[], int);

int main(void)
{
    int tc;
    int n, x;
    int i, j=0, k;
     int s[100],r[100];
     int v[100]={0},rs[100]={0};

    scanf("%d", &tc);
    for (i = 0; i < tc; i++)    //test case num
    {
        scanf("%d %d", &n, &x);  
        for (k = 0; k < n; k++)   //movie num
            {
                scanf("%d %d", &s[k],&r[k]);
                if (s[k] <= x)
                {
                    v[j] = r[k];
                    j++;
                }
            }
    rs[i]=max(v,n);

    j=0;        
    }
for (i=0;i<tc;i++)
{
    printf("%d\n",rs[i]);
}    

    return 0;
}
int max(int a[], int n)
{
    int max = a[0];
    int i;
    for (i = 0; i < n; i++)
    {
        if (a[i] > max)
        {
            max = a[i];
        }
    }
    return max;
}
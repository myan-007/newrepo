#include<stdio.h>
int main()
{
    int t;
    scanf("%d",&t);
    while (t--)
    {
        long long int f,n,subset_sum=0;
        long long int i;
        scanf("%lld",&n);
        long long int a[n],subset_max=-9999999;
        for (i = 0; i < n; i++)
        {
            scanf("%lld",&a[i]);
            if (a[i]>0)
            {
                subset_sum+=a[i];
                f++;
            }
            if (subset_max<a[i])
            {
                subset_max=a[i];
            }
        }
         long long int max=0,subseq_sum=0;
        if (!(f>1))
        {
            subseq_sum=subset_max;
            subset_sum=subset_max;
        }
        for (i = 0; i < n; i++)
            {
               max=max+a[i];
               if (max<0)
               max=0;
               else if (max>subseq_sum)
               {
                   subseq_sum=max;
               }
            }
        printf("%lld %lld\n",subseq_sum,subset_sum);
        
    }
    
    return 0;
}
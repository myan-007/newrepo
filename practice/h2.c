#include<stdio.h>
int main()
{
    int nu;
    int z,p,n;
    float ans;
    z=n=p=0;
    int ar[100];
    scanf("%d",&nu);
    for(int i=0;i<nu;i++)
    {
        scanf("%d",&ar[i]);
        if (ar[i]==0) 
        {
            z++;
        }
        else 
        {
            if (ar[i]>0) 
            p++;
            else {
                n++;
            }
        }
        
    }
    printf("%d ",p);
    printf("%d ",n);
    printf("%d ",z);
    ans=(float)p/nu;
    printf("%f\n",ans);
    ans=(float)n/nu;
    printf("%f\n",ans);
    ans=(float)z/nu;
    printf("%f\n",ans);
    return 0;
}
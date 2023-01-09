#include<stdio.h>
int main()
{
    int m[60],a=0;
    int n;
    scanf("%d",&n);
    for(int i=0;i<n;i++)
    {
        scanf("%d",&m[i]);
        if(m[i]>=38)
        {
            for(int j=m[i];(j)%5!=0;j++)
            {
                a=j+1;
            }
            if (a-m[i]<3) {
            m[i]=a;
            }
        }
        
    }
    for (int i = 0; i < n; i++)
    {
        printf("%d\n",m[i]);
    }
    
    return 0;
}

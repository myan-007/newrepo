//evaluate the expression
#include<stdio.h>
int main()
{
    int n,ans=0;
    int a[100];
    scanf("%d",&n);
    printf("Enter %d real number :",n);
    for (int i = 0; i < n; i++)
    {
        scanf("%d",&a[i]);
        ans+=a[i]*a[i];
    }
    printf("Your evaulation of the expression is: %d",ans);
    return 0;
}
#include<stdio.h>
int power(int n,int p)
{
if (p==0)
{
    return 1;
}
else
{
    n=n*power(n,p-1);
    return n;
}

}
int main()
{
    int a=2,b=10;
    printf("%d",power(a,b));
    return 0;
}

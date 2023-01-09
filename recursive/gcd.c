#include<stdio.h>
int gcd(int n,int m)
{
    int i=1;
if (n%i==0 && m%i==0)
{
    gcd(n,m);
    i++;
    return i;
}
else
{
   
    return n;
}

}
int main()
{
    int a=2,b=10;
    printf("%d",gcd(a,b));
    return 0;
}

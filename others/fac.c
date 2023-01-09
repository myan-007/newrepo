#include <stdio.h>
int fac(int);
int main()
{
    int n, ans;
    printf("Enter the number :");
    scanf("%d", &n);
    printf("Factorial is %d", fac(n));
    return 0;
}
int fac(int a)
{
    if (a == 1 || a == 0)
    {
        return 1;
    }
    else
    {
        return (a * fac(a - 1));
    }
}
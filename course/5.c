#include<stdio.h>
int main()
{
    int m;
    m=9;
    {
        int m=8;
        printf("%d",m);
    }
    printf("%d",m);
}
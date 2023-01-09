#include<stdio.h>

int main()
{
    int a;
    a=increment();
    a=increment();
    a=increment();
    printf("%d",a);
    return 0;
}

static int increment()
{   
    int c;
    c=c+1;
    return c;
}


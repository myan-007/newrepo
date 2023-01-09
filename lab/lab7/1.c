#include<stdio.h>
int main()
{
    int a,b;
    scanf("%d %d",&a,&b);
    int *p1,*p2;
    int t;
    p1=&a;
    p2=&b;
    t= *p2;
    *p2= *p1;
    *p1=t;
    

   
    printf("a=%d b=%d",a,b);

    return 0;
}
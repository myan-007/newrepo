#include<stdio.h>
int main()
{
    void func();  
    int n;
    scanf("%d",&n);
    func(n);
    return 0;
}
void func(int n)
{
    int a=1,b=1,s=1;
    printf("%d ",a);
    while(s<=n)
    {
        printf("%d ",s);
        s=a+b;
        a=b;
        b=s;
    }

}
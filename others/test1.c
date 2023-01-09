#include<stdio.h>
void in(int a[100][100])
{
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j <3; j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
}
void out(int a[100][100])
{
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j <3; j++)
        {
            printf("%d ",a[i][j]);
        }
        printf("\n");
    }
}
int main()
{
    // int x=1,*p=&x;
    int a[100][100],b[100][100],c[100][100];
    in(a);
    in(b);
    out(a);
    out(b);
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j <3; j++)
        {
            for (int k = 0; k < 3; k++)
            {
                c[i][j]=a[j][k]*b[k][j]+c[i][j];
            }
        }
    }
    out(c);

    // int *q;
    // q=p;
    // printf("%d\n",*q);
    // *q=5;
    // printf("%d",*p);
    return 0;
}
#include<string.h>
void sort(int a[], int n);
void rev(char a[],char b[])
{
    int j=0;
    for(int i=strlen(a)-1;i>=0;i--)
    {
        b[j]=a[i];
        j++;
    }
}
int len(char ar[])
{
    int i;
    while(ar[i]!='\0')
    {
        i++;
    }
    return i;
}
void sort(int a[],int n)
{
    int t;
    for (int i = 0; i < n-1; i++)
    {
        for(int j=0;j<n-i-1;j++)
        {
            if (a[j]>a[j+1])
            {
                t=a[j+1];
                a[j+1]=a[j];
                a[j]=t;
            }
        }
    }
}
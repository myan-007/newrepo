#include<stdio.h>
#include<string.h>
void rev(char a[],char b[]);
int main()
{
    char a[100],b[100];
    gets(a);
    rev(a,b);
    puts(b);
    return 0;
}
void rev(char a[],char b[])
{
    int j=0;
    for(int i=strlen(a)-1;i>=0;i--)
    {
        b[j]=a[i];
        j++;
    }
}
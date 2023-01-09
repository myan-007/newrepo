#include<stdio.h>
int main()
{
    char j;
    scanf("%c",&j);
    void Printline(char);
    Printline(j);
    return 0;
}
void Printline(char j)
{
    int i;
    for(i=0;i<81;i++)
    {
        printf("%c",j);
    }
}
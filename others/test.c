#include<stdio.h>
int main()
{
    
    // char country[15] = "United Kingdom";
    // printf("%15s\n", country);
    // char a[9]="hey meet";
    // int a=3,b=4;
    // printf("%d",a++ + ++b);
    char a[100];
    scanf("%[^\n]",a);
    printf("%s",a);
    // scanf("%s",a);
    // printf("%s\n",a);
    return 0;
}
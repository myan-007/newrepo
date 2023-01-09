#include <stdio.h>
int len(char ar[]);
int main()
{
    char a[100], b[100];
    int ans = 0;
    gets(a);
    gets(b);
    if (len(a) == len(b))
    {
        for (int i = 0; a[i] != '\0'; i++)
        {
            if (a[i] == b[i])
            {
                ans = 1;
            }
            if (a[i] != b[i])
            {
                ans = 0;
                break;
            }
        }
        if (ans )
        {
            printf("%d",ans);
            printf("Strings are same");
        }
        else
        {
            printf("string are different");
        }
    }
    else
    {
        printf("length of string are not same so string is different");
    }

    return 0;
}
int len(char ar[])
{
    int i;
    while (ar[i] != '\0')
    {
        i++;
    }
    return i;
}
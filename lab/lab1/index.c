#include <stdio.h>
#include <string.h>

int length(char a[100]){
    int n=0;
    for (int i = 0; a[i] != '\0'; i++)
    {
        n++;
    }
    return n;
}
int main()
{
    char a[100],b[100];
    int n1,n2;
    gets(a);
    gets(b);
    n1=length(a);
    n2=length(b);
    for (int i = 0; i < n2; i++)
    {
            for (int j = 0; j < n1; j++)
            {
                if (a[j]==b[i])
                {
                    printf("First %d",j);
                    goto n;
                }
                
            }
            
    }
    n:
    
return 0;
}
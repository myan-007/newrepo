#include <stdio.h>
#include <string.h>


int main() {

  int t;
  scanf("%d",&t);
  while(t--)
  {
    char s[1000];
    scanf("%s",s);
    int c=1;
    for(int i=0;i<strlen(s);i++)
    {
        if(s[i]==s[i+1])
        {
            c++;
        }
        else
        {
            if (c>9)
            {
                for (int j = 0; j < c/9; j++)
                {
                    printf("9%c",s[i]);
                }
                printf("%d%c",(c%9),s[i]);
                c=1;
            }
            else
            {
                printf("%d%c",c,s[i]);
                c=1; 
            }
        
        }
    }
    printf("\n");
  }
    return 0;
}

#include<stdio.h>
int main()
{int le,be;
scanf("%d",&le);
scanf("%d",&be);
for(int a=1;a<=le;a++)
{for(int b=1;b<=be;b++)
    {   if(a==1 || a==le)
        {printf("* ");
        }
        else
        { 
        if(b==1 || b==be)
            printf("* ");
        else
            printf("  ");
        }
    }
    printf("\n");
}   
return 0;
}
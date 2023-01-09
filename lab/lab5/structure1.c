#include<stdio.h>
struct std
{
    int id;
    char name[25];
    int msb1;
    int msb2;
    int msb3;
    int total;
};

int main()
{
    struct std s[10];
   
    
    int i;
    for (int i = 0; i <10; i++)
    {
      scanf("%d %s %d %d %d",&s[i].id,s[i].name,&s[i].msb1,&s[i].msb2,&s[i].msb3);
      s[i].total=s[i].msb1+s[i].msb2+s[i].msb3;
    }
    for (int i = 0; i <10; i++)
    {
      printf("%d %s %d %d %d %d\n",s[i].id,s[i].name,s[i].msb1,s[i].msb2,s[i].msb3,s[i].total);
      
    }
    float max=0;
    int n=0;
    max=s[0].total;

    for (int i = 1; i <10; i++)
    {
        if (s[i].total>max)
        {
            max=s[i].total;
            n=i;
        }
    }
    printf("ROLL NO.    NAME    SUB1    SUB2    SUB3    TOTAL\n");
    for (int i = 0; i < 10; i++)
    {
      printf("%3d  %10s     %3d     %3d     %3d     %3d\n",s[i].id,s[i].name,s[i].msb1,s[i].msb2,s[i].msb3,s[i].total);
    }
    
    
    printf("first rank is of %s",s[n].name);
}
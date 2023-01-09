#include<stdio.h>
struct std
{
    int rno;
    char name[25];
    float msb1;
    float msb2;
    float msb3;
    float total;
};

int main()
{
    struct std s[3];
   
    
    int i;
    for (int i = 0; i <3; i++)
    {
      scanf("%d %s %f %f %f",&s[i].rno,s[i].name,&s[i].msb1,&s[i].msb2,&s[i].msb3);
      s[i].total=s[i].msb1+s[i].msb2+s[i].msb3;
    }
    for (int i = 0; i <3; i++)
    {
      printf("%d %s %f %f %f %f\n",s[i].rno,s[i].name,s[i].msb1,s[i].msb2,s[i].msb3,s[i].total);
      
    }
    float max=0;
    int n=0;
    max=s[0].total;

    for (int i = 1; i <3; i++)
    {
        if (s[i].total>max)
        {
            max=s[i].total;
            n=i;
        }
        
    }
    
    printf("first rank is of %s",s[n].name);
}
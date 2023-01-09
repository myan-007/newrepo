#include<stdio.h>
#include<string.h>
struct pr
{
    int id;
    char name[20];
    float price;

};

int main()
{
    struct  pr it[5],t;
    int in=0;
    for (int i = 0; i <5; i++)
    {
        scanf("%d %s %f",&it[i].id,it[i].name,&it[i].price);
    }
   
 
    for (int i = 0; i < 4; i++)
    {
        for(int j=0;j<4-i;j++)
        {
            if (strcmp(it[j].name,it[j+1].name)>0)
            {
               t=it[j+1];
               it[j+1]=it[j];
               it[j]=t;
            }
        }
    }
    
     printf("  ID            NAME   PRICE\n");
    for (int i = 0; i < 5; i++)
    {
        printf("%4d      %10s  %0.2f\n",it[i].id,it[i].name,it[i].price);
    }
    
    
    
   
    
}
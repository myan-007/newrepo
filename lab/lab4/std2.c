#include<stdio.h>
struct pr
{
    int id;
    char name[20];
    float price;

};

int main()
{
    struct  pr it[5];
    int in=0;
    for (int i = 0; i <5; i++)
    {
        scanf("%d %s %f",&it[i].id,it[i].name,&it[i].price);
    }
    printf("Enter the ID number of product to be searched :");
    scanf("%d",&in);
    printf("ID      NAME    PRICE\n");
    for (int i = 0; i < 5; i++)
    {
        if (it[i].id==in)
        {
           printf("%d      %s  %0.2f",it[i].id,it[i].name,it[i].price);
           return 0;  
        }
        
    }
    printf("ID not found");
    
   
    
}
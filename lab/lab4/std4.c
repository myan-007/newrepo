#include<stdio.h>
struct pr
{
    int a;
    char n[15];
    float p;
}it[5];
void search(int in)
{
    for (int i = 0; i < 5; i++)
    {
        if (it[i].a==in)
        {
           printf("%d      %s  %0.2f",it[i].a,it[i].n,it[i].p);
        
        }
        
    }
}
int main(){

    int in=0;
    for (int i = 0; i <5; i++)
    {
        scanf("%d %s %f",&it[i].a,it[i].n,&it[i].p);
    }
    printf("Enter the ID number of product to be searched :");
    scanf("%d",&in);

    printf("ID      NAME    PRICE\n");
    search(in);
return 0;
}
#include<stdio.h>
#include<string.h>
#define N 5
struct st
{
    int id;
    char n[15];
    int b;

};
int sr(struct st pr[],int id)
{
   int s;
   for (int i = 0; i < N; i++)
    {
        if (pr[i].id==id)
        {
           
           return s;
        } 
    }
    printf("wrong id number\n");
    return 0;
}
int search(struct st pr[],int id)
{
    
    for (int i = 0; i < N; i++)
    {
        if (pr[i].id==id)
        {
           printf("%d %s %d\n",pr[i].id,pr[i].n,pr[i].b);
           return i;
        } 
    }
    printf("Item not found");
    return 0;
}
void withdraw(struct st pr[],int id)
{
   
    int amount;
    scanf("%d",&amount);
    int i=sr(pr,id);
    if(pr[i].b>amount)
    {
        pr[i].b-=amount;
        printf("updated balance %d\n",pr[i].b);
    }
    else
    printf("insufficient balance\n");

}
void deposit(struct st pr[],int id)
{
   
    int amount;
    scanf("%d",&amount);
    int i=sr(pr,id);
    
    pr[i].b+=amount;
    printf("updated balance %d\n",pr[i].b);

}
void display(struct st pr[])
{
   for (int i = 0; i < N; i++)
    {
        printf("%d %s %d\n",pr[i].id,pr[i].n,pr[i].b);
    }
    

}
int main()
{
    printf("First of all enter the info\n");
    struct st c[N];
    printf("NUM \tNAME \t BALANCE\n");
    for (int i = 0; i < N; i++)
    {
        scanf("%d %s %d",&c[i].id,c[i].n,&c[i].b);
    }
    int i;
    printf("ENTER THE NUMBER TO PERFORM RESPECTIVE TASKS\n");
    printf("ENTER 1 TO SEARCH\n");
    printf("ENTER 2 TO WITHDRAW\n");
    printf("ENTER 3 TO DEPOSIT\n");
    printf("ENTER 4 TO DISPLAY ALL DETAILS\n");
    printf("ENTER 0 TO QUIT\n");

    scanf("%d",&i);
   
    
    int id;
    printf("Enter ID number of BANK AC\n");
    scanf("%d",&id);
    switch (i)
    {
        
        case 1:
        search(c,id);
        break;
        case 2:
        withdraw(c,id);
        break;
        case 3:
        deposit(c,id);
        break;
        case 4:
        display(c);
        break;
        case 0:break;
        default:
        printf("invalid operation\n");
    }

}
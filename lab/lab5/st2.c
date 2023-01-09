#include<stdio.h>
#define N 5
struct pd
    {
        int in;
        char name[15];
        float pr;
    };

int search(struct pd prt[],int id)
{
    for (int i = 0; i < N; i++)
    {
        if (prt[i].in==id)
        {
           printf("%d %s %f",prt[i].in,prt[i].name,prt[i].pr);
           return 0;
        } 
    }
    printf("Item not found");
    return 0;
}
int main()
{
    struct pd pr[N];
    
    for (int i = 0; i < N; i++)
    {
        scanf("%d %s %f",&pr[i].in,pr[i].name,&pr[i].pr);
    }
    int id;
    scanf("%d",&id);
    search(pr,id);
    return 0;
}
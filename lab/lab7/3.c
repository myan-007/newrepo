#include<stdio.h>
#include<string.h>
#define N 5
struct pd
    {
        int in;
        char name[15];
        float pr;
    };

void search(struct pd *u,int id)
{
    for (int i = 0; i < N; i++)
    {
        if ((u+i)->in==id)
        {
           printf("%d %s %f",(u+i)->in,(u+i)->name,(u+i)->pr);
           return;
        } 
    }
    printf("Item not found");
    return ;
}
void sort(struct pd *y)
{
    struct pd t;
    for (int i = 0; i < N-1; i++)
    {
        for (int j = 0; j < N-i-1; j++)
        {
           if (strcmp((y+j)->name,(y+j+1)->name)>0)
           {
             t=*(y+j+1);
             *(y+j+1)=*(y+j);
             *(y+j)=t;
            
           }
           
        }
        
    }
    
}
int main()
{
    struct pd pr[N],*p;
    p=&pr[0];
    for (int i = 0; i < N; i++)
    {
        scanf("%d %s %f",&(p+i)->in,(p+i)->name,&(p+i)->pr);
    }
    sort(p);
    // int id;
    // printf("Enter the ID to be searched :");
    // scanf("%d",&id);
    // search(p,id);
    printf("ID\tNAME\t\tPRICE\n");
    for (int i = 0; i < N; i++)
    {
        printf("%d\t%s\t\t%f\n",(p+i)->in,(p+i)->name,(p+i)->pr);
    }
    return 0;
}
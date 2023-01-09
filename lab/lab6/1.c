#include<stdio.h>
#define N 5

union pd
    {
        int id;
        char name[15];
        float pr;
    };


int main()
{
    union pd pr[N];
    for (int i = 0; i < N; i++)
    {
        printf("enter isbn code of book%d\n",i+1);
        scanf("%d",&pr[i].id);
        printf("isbn code of book%d is %d\n",i+1,pr[i].id);
        printf("enter title of book%d\n",i+1);
        scanf("%s",pr[i].name);
        printf("title of book%d is %s\n",i+1,pr[i].name);
       
        printf("enter price of book%d\n",i+1); 
        scanf("%f",&pr[i].pr);
        printf("Price of book%d is %f\n",i+1,pr[i].pr);
    }
    
    return 0;
}
// #include<stdio.h>
// #include<string.h>
// #define N 5
// struct pd
//     {
//         int in;
//         char name[15];
//         float pr;
//     };

// void sort(struct pd prt[])
// {
//     struct pd t;
//     for (int i = 0; i < N-1; i++)
//     {
//         for (int j = 0; j < N-i-1; j++)
//         {
//            if (strcmp(prt[j].name,prt[j+1].name)>0)
//            {
//              t=prt[j+1];
//              prt[j+1]=prt[j];
//              prt[j]=t;  
//            }
           
//         }
        
//     }
    
// }
// int main()
// {
//     struct pd pr[N];
    
//     for (int i = 0; i < N; i++)
//     {
//         scanf("%d %s %f",&pr[i].in,pr[i].name,&pr[i].pr);
//     }
//     sort(pr);
//     for (int i = 0; i < N; i++)
//     {
//         printf("%d %s %f\n",pr[i].in,pr[i].name,pr[i].pr);
//     }
   
//     return 0;
// }
#include<stdio.h>
int main()
{
int a = 10, c;
void *p = &a;
float b = 3.14;
p = &b;
c = a + b;
printf("\n %d %u", c ,p);
return 0;
}
#include<stdio.h>
#define N 4

struct std
{
    int id;
    char name[25];
    int msb1;
    int msb2;
    int msb3;
    int total;
};
int main(){

    struct std *p,s[10],*g;
    p=&s[0];
  

    for (int i = 0; i<N; i++)
    {
      
        scanf("%d %s %d %d %d",&(p+i)->id,(p+i)->name,&(p+i)->msb1,&(p+i)->msb2,&(p+i)->msb3);
        (p+i)->total=(p+i)->msb1+(p+i)->msb2+(p+i)->msb3;
        
    }
    int max=0;
    for (int i = 0; i < N; i++)
    {
        printf("Name: %s ID: %d MSB1 :%d MSB2 :%d MSB3 :%d Total :%d\n",(p+i)->name,(p+i)->id,(p+i)->msb1,(p+i)->msb2,(p+i)->msb3,(p+i)->total);
        if(max<(p+i)->total){
            max=(p+i)->total;
            g=p;
        }
    }
    printf("%d %s",max,g->name);
    
    return 0;
}
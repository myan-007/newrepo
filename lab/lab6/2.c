#include<stdio.h>
struct data
{
    char n[15];
    union age
    {
        int d;
        int m;
        int y;
    }b;
    int d;
    int m;
   
};

int main()
{
    struct data a[10];
    int age,date;
    for (int i = 0; i < 10; i++)
    {
        printf("Enter the name of person :\n");
        scanf("%s",a[i].n);
        printf("Name :%s\n",a[i].n);
        printf("Enter the year in which person is born :\n");
        scanf("%d",&a[i].b.y);
        age=2021-a[i].b.y;
        if(age<18)
        {
            printf("Enter the date and month :\n");
            scanf("%d %d",&a[i].d,&a[i].m);
            printf("%d-%02d-%d\n",a[i].d,a[i].m,a[i].b.y);
        }
        if(age<40 && age>=18)
        {
            printf("%s %d\n",a[i].n,age);
        }
        if(age>40)
        {

            
            printf("%s O\n",a[i].n);
        }
        
    }
    
    return 0;
}
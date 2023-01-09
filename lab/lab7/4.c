// #include<stdio.h>
// int main(int argc, char const *argv[])
// {
//     // int g;
//     // g=90;
//     // int* p;
//     // p=&g;
//     // int *p2;
//     // p2=p;
//     // g=23;

//     // printf("p: %u\n", p);
//     // printf("p2: %u\n", p2);
//     // printf("p: %d\n",*p);
//     // printf("p2: %d\n",*p2);
//     int t[3][3]={{1,2,3},{4,5,6},{7,8,9}};
//     int *u;
//     u=t;
//     printf("t: %d\n", t);
//     printf("t: %u\n", &t[0]);
//     printf("t: %u\n", &t[0][0]);
//     printf("t: %u\n", &t[0]);
//     printf("-------------------\n");
//     printf("t: %d\n", *(u+3));
//     printf("-------------------\n");
//     printf("t: %u\n", *(*(&t[0])));

//     char str[]="meet";
//     char *p=str;
//     printf("%d",*(p+4));

//     char *e[2]={"meet","anjali"};
    
//     printf("*(e+4): %s\n", *(e+1));
// return 0;
// }
#include<stdio.h>
struct Data
{
int count;
int (*i)[10];
 int *p;
 }d[3],*ptr ;
int main()
 {
int x=100,y=200,z=300;
 ptr=d;
 d[0].count=10; //ptr->count = 10;
 d[1].count=20; //(ptr+1)->count=20;
 d[2].count=30; //(ptr+2)->count=20;
 printf("%d\n",ptr->count);
 printf("%d\n",++ptr->count);
 printf("%d\n",(++ptr)->count);
 printf("%d\n",(ptr++)->count);
 printf("%d\n",ptr->count);
 ptr=d;
 d[0].p=&x;//ptr->p=&x;
 d[1].p=&y;//(ptr+1)->p=&y;
 d[2].p=&z;//(ptr+2)->p=&z;
 printf("-%d\n",*ptr->p);
 printf("%d\n",*ptr->p); 
//  printf("%d\n",*ptr->p++); 
 printf("-%d\n",*ptr->p++);
 printf("%d\n",*ptr->p); 
 printf("%d\n",(*ptr->p)++); 
 printf("%d\n",*ptr->p); 
 printf("%d\n",*ptr++->p); 
 printf("%d\n",*ptr->p); 
 //printf("%d\n",*ptr->++p); //illegal
 return 0;
}
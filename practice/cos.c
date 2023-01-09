#include<stdio.h>
#include<math.h>
#define PI 3.14
int main()
{
  printf("angle\t\t\t\tvalue\n\n");
  int a=0;
  float v;
  while(a<=180)
{
    v=(PI/180)*a;
    printf("%d\t\t\t\t%4.12f\n",a,cos(v));   
    a+=10; 
}
return 0;
}

// this is the problem to print all the value of the angle cos


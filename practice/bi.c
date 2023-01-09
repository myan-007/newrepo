#include<stdio.h>
int main()
{ 
int i,o=0,x,y,a=1;
scanf("%d",&i);
while(i>0)
{   
    
    y=i%2;
    i=i/2;
    o=o+y*a;
    a=a*10;

}
 printf("%d",o);
}
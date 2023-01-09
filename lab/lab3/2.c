#include<stdio.h>
void Calc(float,float,float);
int main()
{
    float p,r,y;
    scanf("%f",&p);
    scanf("%f",&r);
    scanf("%f",&y);
    Calc(p,r,y);
    return 0;
}
void Calc(float ta,float r,float y)
{
   
    for(int i=0;i<y;i++)
    {
        ta= ta*(1+r);
    }
    printf("%f",ta);
}
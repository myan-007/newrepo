#include<stdio.h>
float Calc(float,float,float);
int main()
{
    float p,r,y;
    printf("Enter the principal value:");
    scanf("%f",&p);
    printf("\nEnter the rate:");
    scanf("%f",&r);
    printf("\nEnter the year:");
    scanf("%f",&y);
    printf("\nTOTAL AMOUNT :%.3f",Calc(p,r,y));
    return 0;
}
float Calc(float ta,float r,float y)
{
   
    for(int i=0;i<y;i++)
    {
        ta= ta*(1+r);
    }
    return ta;
}
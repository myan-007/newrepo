#include<stdio.h>
int main()
{
    float f=3.1234567899876543211234F;
    double d=(double)3.1234567899876543211234;
    long double ld=3.1234567899876543211234;
    printf("%.16f\\",f);
    printf("%.16f\\",d);
    printf("%.21Lf\\",ld);
    return 0;
}
   
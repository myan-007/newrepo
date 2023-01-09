#include<stdio.h>
int main(){

    for (int i = 0; i < 100; i++)
    {
        printf("%d^%d^%d =%d\n",i,i+1,i+2,i^(i+1)^(i+2));
    }
    

    return 0;
}
#include<stdio.h>
#include "macro.c"

int main(){
   
    int ar[5]={1,2,3,4,5};
    ARRAYPF(ar,5)
    printf("%0.2f\n",AOC);
    printf("%0.2f\n",CIRCLE(8));
    printf("%0.2f\n",AREA(8));
    return 0;
}

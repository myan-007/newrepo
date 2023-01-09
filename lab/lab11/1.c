#include<stdio.h>

#define PRINT(x,y) printf("x: %d y: %d\n", x,y);
#define PIE 3.14
#define AOC(r) PIE*(r)*(r)

#ifndef AREA
#define AREA(r) PIE*(r)*(r)
#endif

int main(){
    PRINT(1,2)
    printf("%d\n",AOC(8));
    printf("%0.2f\n",AREA(8));
    printf("%0.2f\n",AREA(8));
    return 0;
}

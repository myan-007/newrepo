#include<stdio.h>
#include<stdlib.h>
int main(int argc, char const *argv[])
{
    char *ptr=(char *)malloc(3);
    for(char* i=ptr;i<=(ptr+3);i++){
        scanf("%s",i);
    }
     for(char* i=ptr;i<=(ptr+3);i++){
        printf("%s",i);
    }
    return 0;
}


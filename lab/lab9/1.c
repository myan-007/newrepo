#include<stdio.h>
#include<stdlib.h> 
int main(){
    int n;
    printf("Enter the number of integer to be entered:\n");
    scanf("%d",&n);
    int *p;
    p=(int *)malloc(n*sizeof(int));
    for(int i=0;i<n;i++){
        scanf("%d",(p+i));
    }
    for(int i=0;i<n;i++){
        printf("address:%u value:%d\n",(p+i),*(p+i));
    }

    return 0;
}


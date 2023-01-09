#include<stdio.h>
#include<string.h>
#include<stdlib.h>


int main(){
    int n;
    scanf("%d",&n);
    int *p=(int *)malloc(sizeof(int)*n);
    for(int i=0;i<n;i++){
        scanf("%d",(p+i));
    }
    
    for(int i=0;i<n-1;i++)
    {
        for(int j=0;j<n-i-1;j++)
        {
            
            if(*(p+i+j)>*(p+i+j+1)){
                int t;
                t=*(p+i+j);
                *(p+i+j)=*(p+i+j+1);
                *(p+i+j+1)=t;
            }
        }
    }
    for(int i=0;i<n;i++){
        printf("%d ",(p+i));
    }
    return 0;
}

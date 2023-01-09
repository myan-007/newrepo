#include<stdio.h>
#include<string.h>
int main(){
    int n;
    scanf("%d",&n);
    char *b,*r;
    b=(char *)malloc(n);
    if(b==NULL){
        printf("Malloc fails\n");
        exit(1);
    }
    strcmp(b,"Switzerland");
    scanf("%d",&n);
    realloc(b,n);
    if(b==NULL){
        printf("Realloc fails\n");
        exit(1);
    }
    int l=strlen(b);
    while (b!='\0')
    {
        *(r)=*(b+l-1);
        l--;
        r++;
    }
    

    return 0;
}

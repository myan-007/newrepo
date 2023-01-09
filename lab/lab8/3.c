#include<stdio.h>
#include<stdlib.h>
int main(){
// the problem is to write a file with the numbers and display it back

    FILE *f;
    f= fopen("src.txt","w");
    int c=0;
    int n=0;
    while (n!=-1)
    {
        scanf("%d",&n);
        
        putw(n,f);
        c++;
    }
    fclose(f);


    f=fopen("src.txt","r");
    n=getw(f);
    int sum=0;
    while (n!=-1)
    {
        printf("%d ",n);
        sum+=n;
        n=getw(f);
    }
    fclose(f);

    printf("average: %d\n", (sum+1)/(c-1));

    return 0;
}

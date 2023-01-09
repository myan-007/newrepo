#include<stdio.h>
int main(){

    FILE *f1;
    f1= fopen("src.txt","r");
    
    int c;int n=0;
    int a[1000]={0};
    for(int i=0;(c=getw(f1))!=EOF;i++){
        a[i]=c;n++;
    }
    fclose(f1);
    int t;
    for(int i=0;i<n-1;i++)
    {
        for(int j=0;j<n-i-1;j++)
        {
            if(a[j]>a[j+1])
            {
                t=a[j];
                a[j]=a[j+1];
                a[j+1]=t;
            }
        }
    }
    f1= fopen("src.txt","w");

    for(int i=0;i<n;i++){
        putw(a[i],f1);
        
    }
    fclose(f1);
    return 0;

}
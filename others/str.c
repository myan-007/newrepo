#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main(){
    int t;
    scanf("%d",&t);
    while (t--)
    {
       char a[27];
       scanf("%s",a);
       int l=strlen(a);
       int pos=0;
       for(int i=0;i<l;i++){
           if(a[i]=='a'){
               pos=i;
           }
       }
       
        while (1==1)
        {
            if( abs((int)a[pos]-(int)a[pos-1])==1 ){
                --pos;
            }
            else if(abs((int)a[pos]-(int)a[pos+1])==1){
                ++pos;
            }
            else{
                printf("no");
            }
        }
        

    }
    


    return 0;
}

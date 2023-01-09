#include<stdio.h>
int main()
{
    FILE *f1;
    if(fopen("in.txt","w")==NULL){
    printf("FILE NOT FOUND\n" );
    return 0;
    }
    f1=fopen("in.txt","w");
    
    char c=getchar();
    while (c!=EOF)
    {
        putc(c,f1);
        c=getchar();
    }
    fclose(f1);
    f1=fopen("in.txt","r");

    while ((c=getc(f1))!=EOF)
    {
        printf("%c",c);
    }
    fclose(f1);
    return 0;
}

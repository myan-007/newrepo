#include<stdio.h>
int main(int argc, char *argv[])
{
    FILE *s,*t;
    
    
    s=fopen(argv[1],"w");
    t=fopen(argv[2],"w");
    if(s==NULL || t==NULL ) {printf("ERROR"); return 0;}
    
    char c=getchar();
    while (c!=EOF)
    {
        putc(c,s);
        c=getchar();
    }
    fclose(s);
    s=fopen(argv[1],"r");
    if(s==NULL ) {printf("ERROR IN OPERATION ON FILE %s",argv[1]); return 0;}
    while ((c=getc(s))!=EOF)
    {
        putc(c,t);
        
    }
    
    fclose(s);
    fclose(t);
    t=fopen(argv[2],"r");
    if(t==NULL ) {printf("ERROR IN OPERATION ON FILE %s",argv[2]); return 0;}
    while ((c=getc(t))!=EOF)
    {
        printf("%c",c);
    }
   
    
    fclose(t);

    return 0;
}


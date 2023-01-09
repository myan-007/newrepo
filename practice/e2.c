#include<stdio.h>
#include<string.h>

int main()
{
    char n[100],c;
    int f=0;
    gets(n);
    int  len = strlen(n);
 
    for (int i = len-1; i >= 0; i--)
    {
        if (n[i]=='1')
        {
          
           f=i;
         break;
        }
    }
   
    printf("%d ",f);
    for (int i = f-1; i >= 0; i--)
    {
       
            if (n[i]=='1')
            {
                
                n[i]='0';
            }
            else
            {
                n[i]='1';
            }
            
        
        
    }
    puts(n);
    return 0;
}
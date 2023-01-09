#include<stdio.h>
int main()
{
    int a[4][4]={0};
    int i,j,x=0,y,c=1,b=0;
    for(i=0;i<8;i++)
    {
        if(i<4)
        {
            y=i;
        x=0;     
        for(j=0;j<=i;j++)
        {  
            a[x][y]=c;
            x++;
            y--;
            c++;
            
        }
        }
        else{
            x=1+b;
            ++b;
            y=3;
           for(j=0;j<=i-2*b;j++)
           {
            a[x][y]=c;   
             x++; 
             y--; 
             c++;
           } 
        }
        
    }
    for(i=0;i<4;i++)
    {
        for(j=0;j<4;j++)
        {   printf("%d ",a[i][j]);
        }
        printf("\n");
    }

    return 0;
}
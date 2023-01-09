#include<stdio.h>
int main()
{ 
int i,o[100]={0},y,j,n;
printf("enter the limit");
scanf("%d",&n);
scanf("%d",&i);
while(i>0)
{   
    for(j=0;j<n;j++)
{
    y=i%16;
    i=i/16;
    // printf("%d",y);
    // printf("%d",i);
    if(y>9)
    {
        o[j]=y+55;
    }
    else
    {
    o[j]=y;
    }
    
}
}
for(j=n-1;j>=0;j--)
    {if(o[j]>9)
    {
        printf("%c",o[j]);
    }
    else
    {
    printf("%d",o[j]);
    }
            
    }

 return 0;
}
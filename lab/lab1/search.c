#include<stdio.h>
int main()
{
    int i,j;
    int n;
    int o[100];
     printf("Enter the number :");
    scanf("%d",&n);
    scanf("%d",&j);
    for(i=0;i<n;i++)
    {
        scanf("%d",&o[i]);
    }
    for(i=0;i<n;i++)
    {
        if(o[i]==j)
        {
            printf("the position of the entered number is %d",(i+1));
        }
        else{

        }
    }
return 0;
}
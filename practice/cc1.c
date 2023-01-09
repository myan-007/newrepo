#include <stdio.h>

int main(void) {
	int n,h,x,i,c,s=0;
	int a[100]={0};
	scanf("%d %d %d",&n,&h,&x);
	c=x;
	for (i=0;i<n;i++) 
	{
	    scanf("%d",&a[i]);
	}
	for (i=0;i<n;i++) 
	{
	    x=c;
	    x=x+a[i];
	    if(x>=h)
        { 
        s=1;
        break;
        }
	}
    if(s==1)
    printf("yes");
    else
    printf("no");
    
return 0;
}
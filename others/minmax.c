#include<stdio.h>
void minmax( int ar[], int l, int *min, int *max)
{
    
    for(int i=1;i<l;i++)
    {
        if (ar[i]>*max)
        {
            *max=ar[i];
        }
        if(ar[i]<*min)
        {
            *min=ar[i];
        }
        
    }

}
int main()
{
    int a[]={1,2,32,3,23};
    int l,min,max;
    max=min=a[0];
    l=sizeof(a)/sizeof(a[0]);
    minmax(a,l,&min,&max);
    printf("%d %d",min,max);
    return 0;
}

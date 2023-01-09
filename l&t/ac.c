#include<stdio.h>
int main(void) {
	
	int t;
	scanf("%d",&t);
	while(t!=0)
	{
	   t--;
	   float a[3],v;
	   for (int i=0;i<3;i++) 
	   {
	       scanf("%f",&a[i]);
	   }
	   scanf("%f",&v);
	float rv;
	rv=a[0]*a[1]*a[2]*v;
	  rv=100.0/rv;
      rv=(int)(rv*100 + 0.5);
	  rv=(float)(rv/100);
      printf("%f",rv);
	  if(rv<9.58F)
	  {
	      printf("yes");
	  }
	  else
	  {
	      printf("no");
	  }
	}
	return 0;
}


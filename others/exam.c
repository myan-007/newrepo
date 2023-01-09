// Define a structure Time which contains three data members Hour, Minute and Seconds.
// Write a program to read, display, add and subtract two Times. Use functions to
// add and subtract the Times which contains pointer to a structure as an argument to it. (time should be in 12 hour format)
#include<stdio.h>
#define N 10
typedef struct time
{
    int hour;
    int minute;
    int second;
} time;
int pos=0;
void display(time a[]){
    if(pos==0){
        printf("NO data available\n");
        return;
    }
    for(int i=0;i<pos;i++){
     
      printf("%d:%d:%d\n",a[i].hour,a[i].minute,a[i].second);  
    }    
}
void read(time a[]){
    printf("Enter the time in format hh:mm:ss\n");
    scanf("%d:%d:%d",&a[pos].hour,&a[pos].minute,&a[pos].second);  
    pos++;
}

void add(time p,time q){

    
    time ans;
    ans.hour=p.hour+q.hour;
    ans.minute=p.minute+q.minute;
    ans.second=p.second+q.second;
    printf("%d:%d:%d\n", ans.hour,ans.minute,ans.second);
}
void substract(time p,time q){

    time ans;
    ans.hour=p.hour-q.hour;
    ans.minute=p.minute-q.minute;
    ans.second=p.second-q.second;
    printf("%d:%d:%d\n", ans.hour,ans.minute,ans.second);
}
int main(){

    time a[N];
    int t=0;
    while (1)
    {
       printf("Enter 1 to display\n");
       printf("Enter 2 to read\n");
       printf("Enter 3 to add\n");
       printf("Enter 4 to substract\n");
       printf("Enter -1 to exit\n");

       scanf("%d",&t);
       if(t==1) display(a);
       else if(t==2) read(a);
       else if(t==3) {
           time x,y;
           printf("Enter the 1st time:\n");
           scanf("%d %d %d",x.hour,x.minute,x.second);
           printf("Enter the 2nd time:\n");
           scanf("%d %d %d",y.hour,y.minute,y.second);
           add(x,y);
       }
       else if(t==4) {
           time x,y;
           printf("Enter the 1st time:\n");
           scanf("%d:%d:%d",x.hour,x.minute,x.second);
           printf("Enter the 2nd time:\n");
           scanf("%d:%d:%d",y.hour,y.minute,y.second);
           substract(x,y);
       }
       else break;

    }
    


    return 0;
}

#include<stdio.h>
#include<stdlib.h>
struct node
{
    int data;
    struct node *next;
};

typedef struct node node;
node *head=NULL;

void add(int data){
    
    node *current=malloc(sizeof(struct node));
    current->data=data;
    current->next=NULL;
    if(head==NULL){
        head=current; return;
    }
    node *tmp=head;
    while (tmp->next!=NULL)
    {
       tmp=tmp->next; 
    }
    tmp->next=current;
}
void print(){

    node *current=head;
    while (current!= NULL)
    {
        printf("%d ",current->data);
        current=current->next;
    }
    printf("\n");
}
void delete(int key){
    
    if(head->data==key){
        head=head->next;
    }
    else{
    node *tmp=head;
    while (tmp->next->data!=key)
    {
       tmp=tmp->next;
       if(tmp->next==NULL) {
           printf("Key not found!!\n");
           return ;
       }    
    }
    tmp->next=tmp->next->next;
    
    }
}
void insert(int key,int data){
    node *toadd;
    toadd=(node *)malloc(sizeof(struct node));
    toadd->data=data;
    toadd->next=NULL;
    if(key==head->data){
        toadd->next=head;
        head=toadd;  
    }
    else if(key==-999){

    node *tmp=head;
    while (tmp->next!=NULL)
    {
       tmp=tmp->next;  
    }
    tmp->next=toadd;
    toadd->next=NULL;
    }
    else{
    node *tmp=head;
    while (tmp->next->data!=key)
    {
        printf("%d",tmp->next->data);
       tmp=tmp->next;
       if(tmp->next==NULL) {
           printf("Key not found!!\n");
           return ; 
       } 
    }
    toadd->next=tmp->next;
    tmp->next=toadd;}
   


}
int main(){

    // printf("Enter the number in linked list\n");     
    // printf("Enter -999 to end\n");
    head=(node *)malloc(sizeof(struct node));
  
    
    head->data=56;
    head->next=NULL;
    add(34);
    add(45);
    add(56);
    add(100);
    print();
    printf("\nEnter the key and data:\n");
    int k,d;
    // scanf("%d %d",&k,&d);
    scanf("%d",&k);
    // insert(k,d);
    // print();
    delete(k);
    print();
    return 0;
}

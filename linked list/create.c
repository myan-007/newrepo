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
    node *toadd;
    toadd =(node *)malloc(sizeof(struct node));
    toadd->data=data;
    toadd->next=NULL;
    node *current=head;
    while (current->next!=NULL)
    {
        current=current->next;

    }
    current->next=toadd;
    
  
}
void print(){

    node *current=head;
    // printf("%d ",head->data);
    // printf("%d ",current->next->data);
    while (current!= NULL)
    {
        printf("%d ",current->data);
        current=current->next;
    }
    

}
int main(){
    
    
    head=(node *)malloc(sizeof(struct node));
    head->data=56;
    head->next=NULL;
    add(67);
    add(45);
    add(23);
    print();
    
    return 0;
}

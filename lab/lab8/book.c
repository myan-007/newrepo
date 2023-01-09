#include<stdio.h>
#include<stdlib.h>
#define N 10
struct book
{
    int num;
    char name[20];
    int price;
};
int main(){

    struct book b[N],j;
    int n;
    printf("Enter the total number of books\n");
    scanf("%d",&n);
    FILE *fp;
    fp=fopen("src.txt","w");
    // printf(fp);
    for(int i=0;i<n;i++){
        printf("Enter the detail of book %d\n",i+1);
        scanf("%d %s %d",&b[i].num,b[i].name,&b[i].price);
        fprintf(fp,"%d %s %d ",b[i].num,b[i].name,b[i].price);
    }
    fclose(fp);
    fp=fopen("src.txt","r");
    int id;
    printf("Enter the number to searched: \n");
    scanf("%d",&id);
    for(int i=0;i<n;i++){
        fscanf(fp,"%d %s %d",&j.num,j.name,&j.price);
        if(j.num==id){
            printf("The data of id %d is\nNAME: %s PRICE: %d",j.num,j.name,j.price);
            break;
        }
    }
    fclose(fp);
    return 0;

}

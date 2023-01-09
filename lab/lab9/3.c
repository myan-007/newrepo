#include<stdio.h>
#include<string.h>
#include<stdlib.h>
struct std
{
    char n[15];
    int id;
    float pr;
};

int main(){
    int n;
    scanf("%d",&n);
    struct std s[n];
    typedef struct std student;
    student *l=(student *)calloc(sizeof(student),n);
    float max=0;
    int pos=0;
    for(int i = 0;i<n;i++){
        printf("Enter the details of student %d\n",i+1);
        scanf("%s %d %f",(l+i)->n,&(l+i)->id,&(l+i)->pr);
        if(((l+i)->pr)>max){
            max=(l+i)->pr;
            pos=i;
        }
    }
    printf("The student having maximum marks is :\n");
    printf("ID: %d NAME :%s PR :%0.2f\n",(l+pos)->id,(l+pos)->n,(l+pos)->pr );
    return 0;
}

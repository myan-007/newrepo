#include<stdio.h>
#include<stdlib.h>
//#define NULL 0

struct linked_list
{
	int number;
	struct linked_list *next;
};

typedef struct linked_list node;  /* node type defined */

void create(node *p); //prototype

void print(node *p);

int main()
{
	node *head;
	head = (node *)malloc(sizeof(node));
	create(head);
	printf("\n");
	print(head);
	printf("\n");
}
void create(node *list)
{
	printf("Input a number\n");
	printf("(type -999 at end): ");
	scanf("%d", &list -> number); /* create current node */

	if(list->number == -999)
	{
		list->next = NULL;
	}
	else 	/*create next node */
	{
		list->next = (node *)malloc(sizeof(node));
		create(list->next);
	}
	return;
}
void print(node *list)
{
		if(list->next != NULL)
		{
		  printf("%d-->",list ->number);  /* print current item */

		  print(list->next);		/* move to next item */
		}
		return;
	}

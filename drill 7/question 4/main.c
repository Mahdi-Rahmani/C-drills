#include <stdio.h>
#include <stdlib.h>

struct node{
	int data;
	struct node *next;
};

struct node* newnode(int data){
	struct node* new_node=(struct node*)malloc(sizeof(struct node));
	new_node->data=data;
	new_node->next=NULL;
	return new_node;	
}

void insertion_sort(struct node **head)
{
	struct node * current=*head;
	struct node * sorted=NULL;
	while(current!=NULL)
	{
		struct node * next_save=current->next;
		sortedinsert(&sorted, current); 
		current=next_save;
	}
	*head=sorted;	
}

void sortedinsert(struct node **sorted,struct node * new_node)
{
	struct Node* current; 
    /* Special case for the head end */
    if (*sorted == NULL || (*sorted)->data >= new_node->data) 
    { 
        new_node->next = *sorted; 
        *sorted = new_node; 
    } 
    else
    { 
        /* Locate the node before the point of insertion */
        current = *sorted; 
        while (current->next!=NULL && 
               current->next->data < new_node->data) 
        { 
            current = current->next; 
        } 
        new_node->next = current->next; 
        current->next = new_node; 
    } 
}

void pushback(struct node ** head,int data)
{
	if(*head==NULL)
	{
		*head=newnode(data);
		return;
	}
	struct node *current=*head;
	while(current->next!=NULL)
	{
		current=current->next;
	}
	current->next=newnode(data);
}

int main() {
	int num;
	struct node *head=NULL;
	scanf("%d",&num);
	for(i=0;i<num;i++)
	{
		scanf("%d",&info);
		pushback(&head,info);
	}
	
	return 0;
}

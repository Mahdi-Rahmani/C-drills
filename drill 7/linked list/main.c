#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
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

void addfront(struct node **head,int data)
{
	struct node* new_node=newnode(data);
	new_node->next=*head;
	*head=new_node;
}


//shekle digar addfront
/*
struct node* addfront(struct node *head,int data)
{
	struct node* new_node=newnode(data);
	new_node->next=*head;
	return new_node;
}

*/
void printnode(struct node *head)
{
	struct node* current_node= head;
	while (current_node!=NULL)
	{
		printf("%d  ",current_node->data);
		current_node=current_node->next;
	}
	printf("\n");
}
//shkle digar printnode
/*
void printnode(struct node *head)
{
	while (head!=NULL)
	{
		printf("%d  ",head->data);
		head=head->next;
	}
	prinntf("\n");
}
*/
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

bool delete_node(struct node** head,int data)
{
	if(*head==NULL)
	{
		return false;
	}
	if((*head)->data==data)
	{
		struct node* temp=*head;
		*head=(*head)->next;
		free(temp);
		return true;
	}
	struct node* current=*head;
	struct node* last=NULL;
	while(current!=NULL)
	{
		if(current->data==data)
		{
			last->next=current->next;
			free(current);
			return true;
		}
		last=current;
		current=current->next;
	}
	return false;
}
int main() {
	struct node* head=NULL;
	addfront(&head,1);
	addfront(&head,3);
	//head=addfront(head,1);
	pushback(&head,0);
	printnode(head);
	delete_node(&head,1);
	printnode(head);
	return 0;
}

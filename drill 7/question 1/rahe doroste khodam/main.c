#include <stdio.h>
#include <stdlib.h>
struct node{
	int data;
	struct node *next;
};
struct node * newnode(int data)
{
	struct node *new_node=(struct node *)malloc(sizeof(struct node));
	new_node->data=data;
	new_node->next=NULL;
	return new_node;
}
void pushback(struct node **head,int data)
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
int listsize(struct node* head)
{
	int size=0;
	struct node *current=head;
	while(current!=NULL)
	{
		size++;
		current=current->next;
	}
	return size;
}
void listpart(struct node *head,int root)
{
	int residue,i,j;
	int rowlength=(listsize(head)/root);
	residue=listsize(head)-rowlength*root;
	struct node* current=head;
	for(i=0;i<root;i++)
	{
		if(current!=NULL)
		{
			if(residue>0)
			{
				for(j=0;j<rowlength+1;j++)
				{
					printf("%d ",current->data);
					current=current->next;
				}
				printf("\n");
				residue--;
			}
			else
			{
				for(j=0;j<rowlength;j++)
				{
					printf("%d ",current->data);
					current=current->next;
				}
				printf("\n");
			}
		}
		else
		{
			printf("null\n");
		}
	}
}
int main() {
	int info;
	int root;
	struct node *head=NULL;
	while(1)
	{
		scanf("%d",&info);
		if(info==0)
			break;
		pushback(&head,info);
	}
	scanf("%d",&root);
	listpart(head,root);
	
	
	return 0;
}

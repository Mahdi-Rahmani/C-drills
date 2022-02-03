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

int list_size_without_p(struct node *head,int p)
{
	int size=0;
	struct node *current=head;
	while(current!=NULL)
	{
		if(current->data!=p)
			size++;
		current=current->next;
	}
	return size;
}
int answer(struct node *head,int no_p_size,int k,int p )
{
	int ans=0;
	int i=0;
	struct node *current=head;
	while(current!=NULL)
	{
		if(current->data!=p)
		{
			if(i==no_p_size-k+1)
			{
				return current->data;
			}
			i++;
		}
		if(i==no_p_size-k+1)
		{
			return current->data;
		}
		current=current->next;
	}
}

int main() {
	int info;
	int k,p,q;
	int ans[200000];
	struct node *head=NULL;
	while(1)
	{
		scanf("%d",&info);
		if(info==0)
		{
			break;
		}
		pushback(&head,info);
	}
	scanf("%d",&q);
	int i;
	int no_p_size;
	for(i=0; i<q;i++)
	{
		scanf("%d",&k);
		scanf("%d",&p);
		no_p_size=list_size_without_p(head,p);
		//printf("%d\n",no_p_size);
		ans[i]=answer(head,no_p_size,k,p);
	}
	for(i=0;i<q;i++)
	{
		printf("%d\n",ans[i]);
	}
	return 0;
}

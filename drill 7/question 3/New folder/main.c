#include <stdio.h>
#include <stdlib.h>
#include <string.h>
struct node{
	int data;
	struct node* left;
	struct node* right;
	struct node* up;
	struct node* down;
};

struct node *pos=NULL;
//struct node *new_head=NULL;

struct node* newnode(int data){
	struct node* new_node=(struct node*)malloc(sizeof(struct node));
	
	new_node->data=data;
	new_node->right=NULL;
	new_node->left=NULL;
	new_node->up=NULL;
	new_node->down=NULL;

	return new_node;	
}

void pushback(struct node ** head,int data)
{
	if(*head==NULL)
	{
		*head=newnode(data);
		pos=*head;
		return;
	}
	struct node *current=*head;
	while(current->right!=NULL)
	{
		current=current->right;
	}
	current->right=newnode(data);
	current->right->left=current;
}

void insertdown(struct node ** head,int data)
{
	(*head)->down=newnode(data);
	(*head)->down->up=*head;
	*head =(*head)->down;
}

void linking_two_sides(struct node ** head,int data)
{
	struct node *current=*head;
	//struct node *last=NULL;
	struct node *temp=NULL;
	while(current->right!=NULL)
	{
		current=current->right;
	}
	//linking left and right
	current->right=newnode(data);
	current->right->left=current;
	//linking up and down
	if(current->up!=NULL&&current->up->right!=NULL)
	{
		current->up->right->down=current->right;
		current->right->up=current->up->right;
	}
}

int  fill_2ndrow_etc(struct node ** head)
{
	int info;
	scanf("%d",&info);
	if(info!=0)
	{
		insertdown(head,info);
		while(1)
		{
			scanf("%d",&info);
			if(info==0)
			{
				return 1;
			}
			linking_two_sides(head,info);
		}		
	}
	else
	{
		return 0 ;	//darvaghe 2 ta 0 poshte sare ham oomade va vorudi gereftan base
	}	
}
int main() {
	int info;
	struct node *head=NULL;
	do{
		//fill the first line
		scanf("%d",&info);
		if(info!=0)
		{
			pushback(&head,info);
		}
		else//fill 2nd line and after
		{
			int x;
			do
			{
				x=fill_2ndrow_etc(&head);
				
			}while(x==1);
			
			break;
		}
	}while(1);
	int i;
	char navigation[200];
	scanf("%s",navigation);
	for(i=0;i<strlen(navigation);i++)
	{
		switch(navigation[i])
		{
			case 'L':
				{
					if(pos->left!=NULL)
					{
						pos=pos->left;
					}
					else
					{
						printf("bonbast");
						return 0;
					}
					break;
				}
			case 'R':
				{
					if(pos->right!=NULL)
					{
						pos=pos->right;
					}
					else
					{
						printf("bonbast");
						return 0;
					}
					break;
				}
			case 'U':
				{
					if(pos->up!=NULL)
					{
						pos=pos->up;
					}
					else
					{
						printf("bonbast");
						return 0;
					}
					break;
				}
			case 'D':
				{
					if(pos->down!=NULL)
					{
						pos=pos->down;
					}
					else
					{
						printf("bonbast");
						return 0;
					}
					break;
				}
				
		}
	}
	printf("%d",pos->data);
	return 0;
}

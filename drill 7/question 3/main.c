#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

struct node{
	int info;
	struct node* left;
	struct node* right;
	struct node* up;
	struct node* down;
};
//this link always point to first Link
struct node *head = NULL;

//this link always point to last Link 
struct node *last = NULL;
struct node *new_last = NULL;

//is list empty
bool isEmpty() {
   return head == NULL;
}
/////////////////////////////////////////
void insertlast( int inf) {

   //create a link
   struct node *link = (struct node*) malloc(sizeof(struct node));
   link->info = inf;
	
   if(isEmpty()) {
      //make it the last link
      last = link;
   } 
   else 
   {
      //make link a new last link
      last->right = link;     
      
      //mark old last node as prev of new link
      link->left = last;
   }
   //point last to new last node
   last = link;
}
//////////////////////////////////////////
void insertdown(int inf)
{
	struct node *link = (struct node*) malloc(sizeof(struct node));
	link->info = inf;
	//make link a new last link
    last->down = link;     
      
    //mark old last node as prev of new link
    link->up = last;
}
///////////////////////////////////////////
void insertdown_complex(int inf)
{
	struct node *link = (struct node*) malloc(sizeof(struct node));
	link->info = inf;
	//make link a new last link
    last->down = link;     
	 
    //mark old last node as prev of new link
    link->up = last;
    
    //make link a new last link
    new_last->right = link;     
      
      //mark old last node as prev of new link
    link->left = new_last;
    
    //point last to new last node 
    new_last=link;
}
///////////////////////////////////////////
int  fill_2ndrow_etc(void)
{
	int i;
	scanf("%d",&i);
	if(i!=0)
	{
		last=head;
		insertdown(i);
		new_last=head->down;
		while(last->right!=NULL)
		{
			//halati ke khate badi kam tar az khate balashe
			last=last->right;
			scanf("%d",&i);
			if(i==0)
			{
				head=head->down;						
				return 1;
			}
			insertdown_complex(i);
		}
		if(i!=0)//dravaghe toole khate badi bishtar az ghablie
		{
			do
			{
				last=new_last;					
				scanf("%d",&i);
				if(i==0)
				{
					head=head->down;						
					return 1;
				}
				insertlast(i);
			}while(1);			
		}
	}
	else
	{
		return 0 ;	//darvaghe 2 ta 0 poshte sare ham oomade va vorudi gereftan base
	}	
}
/////////////////////////////////////////////
int main() {
	int i;
	do{
		//fill the first line
		scanf("%d",&i);
		if(i!=0)
		{
			insertlast(i);
		}
		else//por kardane khate 2 be bad
		{
			int x;
			do
			{
				x=fill_2ndrow_etc();
				
			}while(x==1);
			
			break;
		}
	}while(1);
	return 0;
}

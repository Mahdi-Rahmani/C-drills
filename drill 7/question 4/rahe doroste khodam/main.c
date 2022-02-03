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
int sum;
int first_pos;//shomare khoone ee ke alan tooshim
void sortedinsert(struct node **head_ref, struct node *new_node) ;
void insertion_sort(struct node **head)
{
	struct node * current=*head;// negah darande makane feli
	struct node * sorted=NULL;// negah darane head list sort shode dar har marhale
	while(current!=NULL)
	{
		struct node * next_save=current->next;
		first_pos++;
		sortedinsert(&sorted,current); 
		current=next_save;
	}
	*head=sorted;	
}

void sortedinsert(struct node **head_ref, struct node *new_node) 
{ 
	int second_pos=0;// makani ke gharar ast adad be onja montaghel shavad
    struct node* current;
      
    /* Special case for the head end */
    if (*head_ref == NULL || (*head_ref)->data > new_node->data) //jabeja kardane head bad az har sort dar surate dastane sharaiet
    { 
        new_node->next = *head_ref; 
        *head_ref = new_node; 
        second_pos++;
        sum+=first_pos-second_pos;
    } 
    else
    { 
    	second_pos=second_pos+2;// vaghti miam inja yani ghatan tu khune 2 hastam
        /* Locate the node before the point of insertion */
        current = *head_ref;
        while (current->next!=NULL && current->next->data < new_node->data) // ta moghe ee ke dade ma kuchik tar nist va niaz be jabejaee nadare pointer mire jolo
        { 
            current = current->next; 
            second_pos++;
        }
        int similarity_counter=0;// shenasaee arghame moshabeh baraye test case 25551 masalan

		while(*head_ref!=NULL&&current->next!=NULL &&current->next->data==new_node->data&&first_pos-second_pos>=0)
		{
			similarity_counter++;
			if(similarity_counter>1)
			{
				current = current->next; 
            	second_pos++;
			}
		} 

        sum+=first_pos-second_pos;
        new_node->next = current->next; 
        current->next = new_node; 
    } 
} 
// agar khastim liste moratab shode ra peida konim az in berim
/*void printnode(struct node *head)
{
	struct node* current_node= head;
	while (current_node!=NULL)
	{
		printf("%d  ",current_node->data);
		current_node=current_node->next;
	}
	printf("\n");
}*/
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
	int num,i,info;
	struct node *head=NULL;
	scanf("%d",&num);
	for(i=0;i<num;i++)
	{
		scanf("%d",&info);
		pushback(&head,info);
	}
	insertion_sort(&head);
	//printnode(head);
	printf("%d",sum);
	return 0;
}

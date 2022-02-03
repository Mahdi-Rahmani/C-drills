#include <stdio.h>
#include <stdlib.h>
struct node{
	int info;
	struct node *next;
};

int p,k,count,ident;
int arr[90000];

void makelist(struct node *list)
{
	scanf("%d",&list->info);
	if(list->info==0)
	{
		list->next=NULL;
		return;
	}
	else
	{
		list->next=(struct node*)malloc(sizeof(struct node));
		makelist(list->next);
		count++;
	}
	return;
}
int i;
int finder(struct node *list)
{
	int j;
	int new_arr[count+2];
	
	if(list->next!=NULL)
	{
		
		if(list->info!=p)
		{
			arr[i]=list->info;
			ident++;
			i++;
			
		}
		finder(list->next);
	}

	return;
}
int main() {
	int e=0,q,j=0,f;
	struct node *start;
	start=(struct node*)malloc(sizeof(struct node));
	makelist(start);
	scanf("%d",&q);
	int new_arr[q];
	for(e=0;e<q;e++)
	{
		scanf("%d",&k);
		scanf("%d",&p);
		finder(start);
		new_arr[j]=arr[ident-k];
		j++;
		ident=0;
		for(f=0;f<500;f++)
		{
			arr[f]=0;
		}
		i=0;

	}
	for(f=0;f<q;f++)
	{
		printf("%d\n",new_arr[f]);
	}
	return 0;
}

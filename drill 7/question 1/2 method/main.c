#include <stdio.h>
#include <stdlib.h>
struct node{
	int info;
	struct node *next;
};
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
	}
	return;
}
int main() {
	struct node *start;
	start=(struct node*)malloc(sizeof(struct node));
	makelist(start);
	return 0;
}

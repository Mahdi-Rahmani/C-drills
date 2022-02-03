#include <stdio.h>
#include <stdlib.h>
struct node{
	int info;
	struct node *next;
};

struct node* node_construct(int i) {
	struct node* nn = NULL;
	nn = malloc(sizeof(struct node));
	if (nn == NULL) {
		return NULL;
	}
	nn->info = i;
	nn->next = NULL;
  	return nn;
}

void list_push_back(struct node* list, struct node* nn){
  struct node* current;

  for(current = list; current-> next != NULL; current = current-> next);

  current->next = nn;
  nn->next = NULL;
}
  
int main() {

	int inf;
	struct node* list = NULL;

	do{
		scanf("%d ",&inf);
		if(inf!=0)
		{
			list_push_back(list,node_construct(inf));
		}
	}while(inf!=0);
	return 0;
}

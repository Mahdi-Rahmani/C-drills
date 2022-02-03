#include <stdio.h>
#include <stdlib.h>
struct node* node_construct(int i);
int sort(struct node *list);
void add_front(struct node ** list , int member);
void list_print(struct node *list);
//void list_print(struct node *list);
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
struct node{
	int info;
	struct node * next;
};
int main(int argc, char *argv[]) {
	int n;
	scanf("%d",&n);
	int member;
	scanf("%d",&member);
	struct node *list=node_construct(member);
	int i;
	struct node * c1;
	struct node * c2;
	int counter=0;
	int key;
	for(i=1;i<n;i++){
		scanf("%d",&member);
		add_front(&list ,member);
		//printf("hi");
		//list_print(list);
		for(c1=list;c1->next!=NULL;c1=c1->next){
			c2=c1->next;
			if(c1->info<c2->info){
				key=c1->info;
				c1->info=c2->info;
				c2->info=key;
				counter++;
			}
		}
			
	}
	printf("%d",counter);
	return 0;
}
///func
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

void add_front(struct node ** list , int member){
	struct node * nn = node_construct(member);
	nn->next=*list;
	*list=nn;
}
void list_print(struct node *list){
  struct node* current;

  for(current = list; current != NULL; current = current-> next) {
    printf("%d ", current->info);
  }
}

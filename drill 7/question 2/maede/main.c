#include <stdio.h>
#include <stdlib.h>
struct node* node_construct(int i);
void list_push_back(struct node* list, struct node* nn);
int func(int k,int p,struct node *list);
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
struct node{
	int info;
	struct node * next;
};
int main(int argc, char *argv[]) {
	int n;
	scanf("%d",&n);
	struct node*list=node_construct(n);
	int node_counter=1;
	while(1){
		scanf("%d",&n);
		if(n==0)
		break;
		struct node* nn=node_construct(n);
		list_push_back(list,nn);
		node_counter++;
	}
	int q;
	scanf("%d",&q);
	int a[q][2];
	int i;
	for(i=0;i<q;i++){
	scanf("%d",&a[i][0]);//k
	scanf("%d",&a[i][1]);//p	
	}
	for(i=0;i<q;i++){
		printf("%d\n",func(a[i][0],a[i][1],list));
	}
	return 0;
}
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
int func(int k,int p,struct node *list){
	int i=0;
	struct node* current;
	struct node* current2;
	current2=list;
	int cnt=0;
	for(current = list ; current != NULL; current = current-> next) {
		if(current->info==p)
		cnt++;
		i++;
  }
  int main=i-cnt;
  int j=1;
  //printf("i=%d,cnt=%d,main=%d\n",i,cnt,main);
  for(j;j<main-k+1;){
  	if(current2->info!=p)
  	j++;
  	current2=current2->next;
  }
  if(current2->info==p){
  	while(current2->info==p){
  		current2=current2->next;
	  }
  }
  return current2->info;
}

#include <stdio.h>
#include <stdlib.h>

struct node { int i; struct node *next;};

void print_list(struct node * s){
  struct node * curnode = s;
  while (curnode->next != NULL){
	 printf("value:%d\n next_node:%p\n", curnode->i, curnode->next);
	 curnode = curnode->next;
  }
}

struct node * insert_front( struct node * s, int x){
  struct node * new = malloc(sizeof(int) + sizeof(struct node*));
  new->i = x;
  new->next = s;
  return new;
}

struct node * free_list(struct node * s){
  //struct node * begin = s;
  for (struct node * x = s;x->next != NULL;x = x->next){
    free(x);
  }
  return s;
}

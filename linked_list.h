#include <stdio.h>

struct node { int i; struct node *next;};

void print_list(struct node * s){
  printf("value:%d\n next_node:%p", s->i, s->next); 
}

struct node * insert_front( struct node * s, int x){
  struct node new;
  new->next = s;
  int * p = malloc(sizeof(int));
  p = &x;
  new->i = *p;
  return new;
}

struct node * free_list(struct node * s){
  // struct node * begin = s;
  for (struct node * x = s;x->next != NULL;x = x->next){
    free(x);
  }
  return s;
}


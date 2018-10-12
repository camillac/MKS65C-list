#include <stdio.h>
#include <stdlib.h>
#include "linked_list.h"

void print_list(struct node * s){
	struct node * curnode = s;
	while (curnode){
		printf("|%d| -> ", curnode->i);
		curnode = curnode->next;
		}
		printf("\n");
		//printf("test in print_list");
}

struct node * insert_front( struct node * s, int x){
	struct node * new = malloc(sizeof(struct node));
	new->next = s;
	new->i = x;
	return new;
}

struct node * free_list(struct node * s){
	if (s->next) {
		free_list(s->next);
		}
	//printf("debug ORIGINAL%d, %p\n", s->i,s->next);
	free(s);
	//printf("debug FREED%d, %p\n", s->i, s->next);
	return s;
}
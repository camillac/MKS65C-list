#include <stdio.h>
#include <stdlib.h>
#include "linked_list.h"

void print_list(struct node * s){
	struct node * curnode = s;
	while (curnode != NULL){
		printf("|%d| -> ", curnode->i);
		curnode = curnode->next;
		}
		printf("\n");
		//printf("test in print_list");
}

struct node * insert_front( struct node * s, int x){
	struct node * new = malloc(sizeof(struct node));
	new->i = x;
	new->next = s;
	return new;
}

struct node * free_list(struct node * s){
	//struct node * begin = s;
	if (s->next == NULL) {
		free(s);
		//printf("debug if free_list NULL %d\n", s->i);
		}
	else {
		free_list(s->next);
		free(s);
		//printf("debug else %d\n", s->i);
	}
	return s;
}
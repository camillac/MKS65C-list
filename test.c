#include <stdio.h>
#include <stdlib.h>
#include "linked_list.c"



int main(){
	printf("linked_list:\n");
	struct node * list;
	list = insert_front(list, 2);
	print_list(list);
	list = insert_front(list, 1);
	print_list(list);
	list = insert_front(list, 0);
	print_list(list);
  
	printf("\nfree_list\n");
	list = free_list(list);
	print_list(list);
	printf("\n");
  
	return 0;
}

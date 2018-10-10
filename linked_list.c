#include <stdio.h>
#include "linked_list.h"

int main(){
  struct node list;
  list = *(insert_front(NULL, 0));
  print_list(*list);
  return 0;
}

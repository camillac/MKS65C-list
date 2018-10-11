struct node { int i; struct node *next;};

void print_list(struct node * s);

struct node * insert_front( struct node * s, int x);

struct node * free_list(struct node * s);

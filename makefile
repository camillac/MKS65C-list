compile: test.c linked_list.c
	gcc test.c

run:
	./a.out
	
linked_list.c: linked_list.h
	gcc linked_list.c

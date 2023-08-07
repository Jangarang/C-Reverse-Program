#ifndef LINKEDLIST_H_
#define LINKEDLIST_H_

typedef struct NODE {
	char *str_data;
	struct NODE* next;
} NODE;

typedef struct LLIST {
	struct NODE* head;
	int length;
} LLIST;

LLIST* listCreate();
void insert(LLIST*, char*);
void display(LLIST*);

#endif /* LINKEDLIST_H_ */

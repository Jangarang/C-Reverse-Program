#include <stdio.h>
#include <string.h>
#include <stdlib.h>

#include "linkedlist.h"

LLIST* listCreate() {
	LLIST *list;
	list = malloc(sizeof(LLIST));
	list -> head = NULL;
	list -> length = 0;
	return list;
}

void insert(LLIST* list, char* str) {
	NODE* new_node;
	int num_chars; 
	new_node = malloc(sizeof(NODE));
	num_chars = strlen(str) + 1;
	new_node -> str_data = malloc(sizeof(char*) * num_chars);
	strcpy(new_node -> str_data, str);
	
	new_node -> next = list -> head;
	list -> head = new_node;
	list -> length += 1;
}

void display(LLIST* list) {
	printf("Displaying Linked List\n");
	NODE* current; 
	current = list -> head;
	while( current != NULL) {
		printf("%s\n",current -> str_data);
		current = current -> next;
	}
}


/*int main(){
	LLIST* dank_list; 
       	dank_list = LListCreate();
	
	insert(dank_list, "Deez nuts!");
	insert(dank_list, "Got em bitch!");
	
	display(dank_list);
	printf("Testing (Got em bitch!) next node. Should be Deez nuts!. It is: %s\n",
		(dank_list -> head) -> next -> str_data);	
	return 0;
}*/

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

#include "linkedlist.h"

int main(){
	FILE *fptr, *tfptr;

	char *buffer;//The address of the first character in the array of characters. A double pointer
	size_t buffer_size = 0; 
	ssize_t characters;
	
	LLIST *reverse_list;
	
	int i = 0;

	reverse_list = listCreate();

	fptr = fopen("input.txt", "r");
	tfptr = fopen("output.txt","w");

	if (fptr == NULL){
		fprintf(stderr, "Failed to open file\n");
		exit(1);
	}
	
	if (tfptr == NULL) {
		fprintf(stderr, "Failed to write to file\n");
		exit(1);		
	}

	while ((characters = getline(&buffer, &buffer_size, fptr)) != -1) {
		insert(reverse_list, buffer);	
	}

	NODE* nv;
	printf("%d",reverse_list -> length);
	nv = reverse_list -> head;
	
	while(i < reverse_list -> length){
		if ( i == 0 ) {
			fprintf(tfptr, "%s", nv -> str_data);
		}
			
		else {
			fprintf(tfptr, "%s", nv -> str_data);
	
		}
		nv = nv -> next;
		i = i + 1;	
	} 	

	fclose(fptr);
	fclose(tfptr);
	exit(0);
}

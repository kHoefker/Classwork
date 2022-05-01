#include <string.h>
#include "lab4.h"

Node **get_NodeforName(Node *head, char *name, int size) {
	Node **valid = malloc(size * sizeof(Node *));
	Node *t = head;
	int i;
	char *comp;
	
	/*
	 * Check each node in list for a matching name
	 */
	i = 0;
	while (t != NULL) {
		comp = strstr(t->Student.student_name, name);
		if (comp != NULL) {
			valid[i++] = t;
		}
		t = t->next;
	}
	valid[i] = NULL; 
	
	return valid;
}

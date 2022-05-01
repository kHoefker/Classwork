#include "lab4.h"

void freeAll(Node *head) {
	Node *t = head;
	Node *toFree;
	
	/*
	 * Free each node in list
	 */
	while (t != NULL) {
		toFree = t;
		t = t->next;
		free(toFree);
		toFree = NULL;
	}
}

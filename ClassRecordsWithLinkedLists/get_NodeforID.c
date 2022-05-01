#include "lab4.h"

Node *get_NodeforID(Node *head, int ID) {
	Node *t = head;
	
	/*
	 * Iterate through list
	 */
	while (t != NULL) {
		if(t->Student.student_ID == ID) { /* Found node */
			return(t);
		}
		t = t->next;
	}
	
	return NULL;
}


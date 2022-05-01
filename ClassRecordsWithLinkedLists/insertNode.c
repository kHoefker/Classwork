#include "lab4.h"

void insertNode(Node **headPtr, Node *n) {
	Node *tPtr = *headPtr;
	if (tPtr == NULL) { /* List is empty */
		*headPtr = n;
		return;
	}
	if (n->Student.student_ID < tPtr->Student.student_ID) { /* Insert first */
		n->next = *headPtr;
		*headPtr = n;
		return;
	}
	
	/*
	 * Find where to insert n
	 */
	while (tPtr->next != NULL && 
					n->Student.student_ID > tPtr->next->Student.student_ID) {
		tPtr = tPtr->next;				
	}
	
	/*
	 * Insert n
	 */
	n->next = tPtr->next;
	tPtr->next = n;
}

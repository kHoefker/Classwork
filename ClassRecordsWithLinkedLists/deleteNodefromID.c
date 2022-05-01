#include "lab4.h"

int deleteNodefromID(Node **head, int StudentID) {
	Node *t = *head;
	Node *toFree;
	
	/*
	 * Check for empty list
	 */
	if (t == NULL) {
		printf("List is empty.");
		return 0;
	}
	
	/*
	 * Check first node
	 */
	if (t->Student.student_ID == StudentID) {
		toFree = *head;
		*head = (*head)->next;
		free(toFree);
		return 1;
	}
	
	/*
	 * Check rest of list
	 */
	while (t->next != NULL && t->next->Student.student_ID != StudentID) {
		t = t->next;
	}
	
	if (t->next == NULL) { /* Didn't find id */
		printf("%i doesn't exist in list.", StudentID);
		return 0;
	} else {
		toFree = t->next;
		t->next = t->next->next;
	}
	
	free(toFree);	
	
	return 1;
}

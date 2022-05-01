#include "lab4.h"

/* This program looks through our linked list and
 * tells the caller program if the studentID # is already
 * in use within the linked list
 */
int ID_isDuplicate(Node *head, int newStudentID) {
	Node *traversePtr = head;
	
	while(traversePtr != NULL){
		if (traversePtr->Student.student_ID == newStudentID) {
			/* found it already in the linked list */
			return(1);
		}
		traversePtr = traversePtr->next;
	}
	
	return(0);
}

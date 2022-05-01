#include "lab4.h"

void option9(Node **head, char Category_Names[][30]) {
	int id;
	Node *n;
	int choice;
	char name[40];
	int i;

	/* get id from user to get Node */
	printf("Please enter the student ID number you wish to delete, followed by enter: ");
	scanf("%i", &id);
	n = get_NodeforID(*head, id);
	
	/* check if node was found */
	if (n == NULL) {
		printf("Student ID %i does not exist.", id);
		return;
	}
	
	/* copy name */
	for (i = 0; i < 40; i++) {
		name[i] = n->Student.student_name[i];
	} 
	
	/* confirm selection */
	printf("Do you really want to delete student ID number %i, %s?\n", id, name);
	printf("If yes, enter 1.  If no, enter 2: ");
	scanf("%i", &choice);
	
	/* if confirmed, delete node from list */
	if (choice == 1) {
		if (deleteNodefromID(head, id)) {
			printf("Student ID number %i, %s has been deleted.\n", id, name);
		} else {
			printf("Error deleting student ID number %i, %s\n", id, name);
		}
	} else {
		printf("student ID number %i, %s was not deleted.\n", id, name);
	}
}


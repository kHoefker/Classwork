#include "lab4.h"

void option1(Node *head, char Category_Names[][30], int size) {
	Node *NodePtr;
	int StudentID;
	
	/* get studentID to use from user */
	printf("Enter the Student ID #: ");
	scanf("%i", &StudentID);
	printf("Hunting for %d\n", StudentID);
	/* look for the correct student Node */
	NodePtr = get_NodeforID(head, StudentID);
	/* we found it or not */
	if(NodePtr == NULL){
		printf("\nERROR: Student ID number %i was not found in the list\n",StudentID);
		return;
	}
	else {
		printHeader(Category_Names);
		printStudent(NodePtr);
	}
}


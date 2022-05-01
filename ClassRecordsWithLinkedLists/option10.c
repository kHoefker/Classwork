#include "lab4.h"

void option10(Node *head, char Category_Names[][30], char *fName) {
	int size = 0;
	
	size = writeToDisk(head, Category_Names, fName);
	
	freeAll(head);
	
	printf("A total of %i student records were written to file %s\n", size, fName);
}



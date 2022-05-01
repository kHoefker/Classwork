#include "lab4.h"

void option2(Node *head, char Category_Names[][30], int size) {
	Node **valid;
	char StudentName[40];
	int i;
	int option;
	char c;	
	
	/* get student name to use from user */
	printf("Enter the Student's Last Name: ");
	c = getchar();
	if (c == '\n') c = getchar();
	i = 0;
	while (c != '\n') {
		StudentName[i++] = c;
		c = getchar();
	}
	StudentName[i] = '\0';
	
	printf("Hunting for %s\n", StudentName);
	/* look for the correct student Node */
	valid = get_NodeforName(head, StudentName, size);
	/* we found it or not */
	if(valid[0] == NULL){
		printf("\nERROR: Student name \"%s\" was not found in the list\n", StudentName);
		return;
	}
	else if (valid[1] == NULL) { /* Only one name */
		printHeader(Category_Names);
		printStudent(valid[0]);
	} else { /* Multiple names */
		printf("There is more than one student by that name.\n");
		/* get name choice from user */
		i = 0;
		while(valid[i] != NULL) {
			printf(" %i)  %s\n", i + 1, valid[i]->Student.student_name);
			i++;
		}
		printf("Please indicate which student you want: ");
		scanf ("%i", &option);
		/* print student info */
		printHeader(Category_Names);
		printStudent(valid[option - 1]);
	}
	
	free(valid);
}


#include "lab4.h"

void option4(Node *head, char Category_Names[][30], int size) {
	int id;
	Node *n;
	
	/* get student id from user to get node */
	printf("What is the Student ID for the scores you want to recalculate\n Student ID: ");
	scanf("%i", &id);
	n = get_NodeforID(head, id);
	
	/* check for valid node */
	if(n == NULL){
		printf("\nERROR: Student ID number %i was not found in the list\n", id);
		return;
	}
	
	printf("Recalculating grades for %s, Student ID Number: %i\n", n->Student.student_name, id);
	/* recalculate grades */
	calcStudent(n);
	
	/* print new info */
	printf("%s Cumlative:  %.2f\n", Category_Names[0], n->Student.Cat1.Cumulative);	
	printf("%s Cumlative:  %.2f\n", Category_Names[1], n->Student.Cat2.Cumulative);	
	printf("%s Cumlative:  %.2f\n", Category_Names[2], n->Student.Cat3.Cumulative);	
	printf("%s Cumlative: %.2f\n", Category_Names[3], n->Student.Cat4.Cumulative);
	printf("Current Grade is:  %.2f\n", n->Student.Current_Grade);
	
	n->Student.Final_Grade = -1;
	printf("Student's Final Grade was deleted\n");
}


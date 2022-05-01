#include "lab4.h"

void option5(Node *head, char Category_Names[][30], int size) {
	Node *t = head;
	
	/* iterate through list */
	while (t != NULL) {	
		/* recalculate student info */
		calcStudent(t);
		
		/* print new student info */
		printf("Student Name: %-30s", t->Student.student_name);
		printf("%s Cumlative:  %.2f       ", Category_Names[0], t->Student.Cat1.Cumulative);
		printf("%s Cumlative:  %.2f      ", Category_Names[1], t->Student.Cat2.Cumulative);
		printf("%s Cumlative:  %.2f      ", Category_Names[2], t->Student.Cat3.Cumulative);
		printf("%s Cumlative:  %.2f ", Category_Names[3], t->Student.Cat4.Cumulative);
		printf("Current Grade is:  %.2f\n", t->Student.Current_Grade);
		
		t = t->next;
	}
}


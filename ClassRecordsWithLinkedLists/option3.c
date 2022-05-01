#include "lab4.h"

void option3(Node *head, char Category_Names[][30], int size) {
	Node *t = head;
	float avg1 = 0, avg2 = 0, avg3 = 0, avg4 = 0, avg5 = 0;
	
	printHeader(Category_Names);
	
	/* iterate through list */
	while (t != NULL) {
		printStudent(t);
		/* make average calculations */
		avg1 += t->Student.Cat1.Cumulative;
		avg2 += t->Student.Cat2.Cumulative;
		avg3 += t->Student.Cat3.Cumulative;
		avg4 += t->Student.Cat4.Cumulative;
		avg5 += t->Student.Current_Grade;
		
		t = t->next;
	}
	
	/* print averages */
	printf("\nClass Averages for %s: %.2f, %s: %.2f, %s: %.2f, %s: %.2f Current Grade  %.2f\n", 
			Category_Names[0], avg1 / size, Category_Names[1], avg2 / size, 
			Category_Names[2], avg3 / size, Category_Names[3], avg4 / size, avg5 / size);
}


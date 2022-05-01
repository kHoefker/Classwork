#include "lab4.h"

void option7(Node *head, char Category_Names[][30], int size) {
	Node *n = head;
	
	/* iterate through list */
	while (n != NULL) {
		/* calculate final grade for n */
		n->Student.Final_Grade = 0;
		if (n->Student.Cat1.Cumulative == -1) {
			n->Student.Final_Grade += 0;
		} else {
			n->Student.Final_Grade += .15 * n->Student.Cat1.Cumulative;
		}
		if (n->Student.Cat2.Cumulative == -1) {
			n->Student.Final_Grade += 0;
		} else {
			n->Student.Final_Grade += .3 * n->Student.Cat2.Cumulative;
		}
		if (n->Student.Cat3.Cumulative == -1) {
			n->Student.Final_Grade += 0;
		} else {
			n->Student.Final_Grade += .2 * n->Student.Cat3.Cumulative;
		}
		if (n->Student.Cat4.Cumulative == -1) {
			n->Student.Final_Grade += 0;
		} else {
			n->Student.Final_Grade += .35 * n->Student.Cat4.Cumulative;
		}
		
		n = n->next;
	}
	
	/* print all student info */
	option3(head, Category_Names, size);
}


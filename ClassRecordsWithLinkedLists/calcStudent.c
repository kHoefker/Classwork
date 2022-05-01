#include "lab4.h"

void calcStudent(Node *n) {
	/*
	 * Calculate Cumulative grades
	 */
	calcGrade(&n->Student.Cat1);
	calcGrade(&n->Student.Cat2);
	calcGrade(&n->Student.Cat3);
	calcGrade(&n->Student.Cat4);
	
	/*
	 * Calculate Current_Grade
	 */
	n->Student.Current_Grade = 0;
	if (n->Student.Cat1.Cumulative == -1) {
		n->Student.Current_Grade += 15;
	} else {
		n->Student.Current_Grade += .15 * n->Student.Cat1.Cumulative;
	}
	if (n->Student.Cat2.Cumulative == -1) {
		n->Student.Current_Grade += 30;
	} else {
		n->Student.Current_Grade += .3 * n->Student.Cat2.Cumulative;
	}
	if (n->Student.Cat3.Cumulative == -1) {
		n->Student.Current_Grade += 20;
	} else {
		n->Student.Current_Grade += .2 * n->Student.Cat3.Cumulative;
	}
	if (n->Student.Cat4.Cumulative == -1) {
		n->Student.Current_Grade += 35;
	} else {
		n->Student.Current_Grade += .35 * n->Student.Cat4.Cumulative;
	}
}

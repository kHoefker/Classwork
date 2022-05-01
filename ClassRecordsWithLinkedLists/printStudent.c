#include "lab4.h"

void printStudent(Node *s) {
	/*
	 * Print student info formatted nicely
	 */
	/* name and id */
	printf("%-23s%-13i", s->Student.student_name, s->Student.student_ID);
	/* cat1 */
	if (s->Student.Cat1.score1 == -1) {
		printf("%6s", "n\\a");
	} else { 
		printf("%6.2f", s->Student.Cat1.score1);
	}
	if (s->Student.Cat1.score2 == -1) {
		printf("%7s", "n\\a");
	} else { 
		printf("%7.2f", s->Student.Cat1.score2);
	}
	if (s->Student.Cat1.score3 == -1) {
		printf("%8s", "n\\a");
	} else { 
		printf("%8.2f", s->Student.Cat1.score3);
	}
	if (s->Student.Cat1.Cumulative == -1) {
		printf("%9s", "n\\a");
	} else { 
		printf("%9.2f", s->Student.Cat1.Cumulative);
	}
	/* cat2 */
	if (s->Student.Cat2.score1 == -1) {
		printf("%8s", "n\\a");
	} else { 
		printf("%8.2f", s->Student.Cat2.score1);
	}
	if (s->Student.Cat2.score2 == -1) {
		printf("%8s", "n\\a");
	} else { 
		printf("%8.2f", s->Student.Cat2.score2);
	}
	if (s->Student.Cat2.score3 == -1) {
		printf("%8s", "n\\a");
	} else { 
		printf("%8.2f", s->Student.Cat2.score3);
	}
	if (s->Student.Cat2.Cumulative == -1) {
		printf("%7s", "n\\a");
	} else { 
		printf("%7.2f", s->Student.Cat2.Cumulative);
	}
	/* cat3 */
	if (s->Student.Cat3.score1 == -1) {
		printf("%7s", "n\\a");
	} else { 
		printf("%7.2f", s->Student.Cat3.score1);
	}
	if (s->Student.Cat3.score2 == -1) {
		printf("%8s", "n\\a");
	} else { 
		printf("%8.2f", s->Student.Cat3.score2);
	}
	if (s->Student.Cat3.score3 == -1) {
		printf("%8s", "n\\a");
	} else { 
		printf("%8.2f", s->Student.Cat3.score3);
	}
	if (s->Student.Cat3.Cumulative == -1) {
		printf("%9s", "n\\a");
	} else { 
		printf("%9.2f", s->Student.Cat3.Cumulative);
	}
	/* cat4 */
	if (s->Student.Cat4.score1 == -1) {
		printf("%8s", "n\\a");
	} else { 
		printf("%8.2f", s->Student.Cat4.score1);
	}
	if (s->Student.Cat4.score2 == -1) {
		printf("%8s", "n\\a");
	} else { 
		printf("%8.2f", s->Student.Cat4.score2);
	}
	if (s->Student.Cat4.score3 == -1) {
		printf("%8s", "n\\a");
	} else { 
		printf("%8.2f", s->Student.Cat4.score3);
	}
	if (s->Student.Cat4.Cumulative == -1) {
		printf("%7s", "n\\a");
	} else { 
		printf("%7.2f", s->Student.Cat4.Cumulative);
	}
	/* current and final grades */
	if (s->Student.Current_Grade == -1) {
		printf("%9s", "n\\a");
	} else { 
		printf("%9.2f", s->Student.Current_Grade);
	}
	if (s->Student.Final_Grade == -1) {
		printf("%8s", "n\\a\n");
	} else { 
		printf("%8.2f\n", s->Student.Final_Grade);
	}
}


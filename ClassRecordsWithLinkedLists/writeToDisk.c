#include "lab4.h"

int writeToDisk (Node *head, char catName[][30], char *fName) {
	int size = 0;
	Node *t = head;
	FILE *updated;
	
	/*
	 * Open output file
	 */
	updated = fopen(fName, "w");
	fprintf(updated, "%s %s %s %s\n", catName[0], catName[1], catName[2], catName[3]);
	
	/*
	 * Write list to file
	 */
	while (t != NULL) {
		fprintf(updated, "%s\n", t->Student.student_name);
		fprintf(updated, "%i\n", t->Student.student_ID);
		fprintf(updated, "%.2f ", t->Student.Cat1.score1);
		fprintf(updated, "%.2f ", t->Student.Cat1.score2);
		fprintf(updated, "%.2f\n", t->Student.Cat1.score3);
		fprintf(updated, "%.2f ", t->Student.Cat2.score1);
		fprintf(updated, "%.2f ", t->Student.Cat2.score2);
		fprintf(updated, "%.2f\n", t->Student.Cat2.score3);
		fprintf(updated, "%.2f ", t->Student.Cat3.score1);
		fprintf(updated, "%.2f ", t->Student.Cat3.score2);
		fprintf(updated, "%.2f\n", t->Student.Cat3.score3);
		fprintf(updated, "%.2f ", t->Student.Cat4.score1);
		fprintf(updated, "%.2f ", t->Student.Cat4.score2);
		fprintf(updated, "%.2f\n", t->Student.Cat4.score3);
		size++;
		t = t->next;
	}
	
	fprintf(updated, "\n");
	
	/*
	 * Close output file
	 */
	fclose(updated);
	
	return size;
}

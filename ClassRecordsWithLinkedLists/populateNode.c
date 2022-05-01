#include "lab4.h"

Node *populateNode(FILE **input) {	
	char *stop;
	Node *n;
	FILE *in = *input;
	int score;
	char c;
	int i;
	
	n = (Node *) malloc(sizeof(Node));
	
	/*
	 * Read data from input
	 */
	/* name */
	c = fgetc(in);
	if (c == '\n') c = fgetc(in);
	i = 0;
	while (c != '\n') {
		n->Student.student_name[i++] = c;
		c = fgetc(in);
	}
	n->Student.student_name[i] = '\0';
	/* id */
	fscanf(in, "%i", &(n->Student.student_ID));
	/* cat1 */
	fscanf(in, "%f", &(n->Student.Cat1.score1));
	fscanf(in, "%f", &(n->Student.Cat1.score2));
	fscanf(in, "%f", &(n->Student.Cat1.score3));
	/* cat2 */					 
	fscanf(in, "%f", &(n->Student.Cat2.score1));
	fscanf(in, "%f", &(n->Student.Cat2.score2));
	fscanf(in, "%f", &(n->Student.Cat2.score3));
	/* cat3 */					 
	fscanf(in, "%f", &(n->Student.Cat3.score1));
	fscanf(in, "%f", &(n->Student.Cat3.score2));
	fscanf(in, "%f", &(n->Student.Cat3.score3));
	/* cat4 */					 
	fscanf(in, "%f", &(n->Student.Cat4.score1));
	fscanf(in, "%f", &(n->Student.Cat4.score2));
	fscanf(in, "%f\n", &(n->Student.Cat4.score3));
	
	/* calculate remaining grades */
	calcStudent(n);
	
	/*
	 * Initialize Final_Grade and next
	 */
	n->Student.Final_Grade = -1;
	n->next = NULL;
				 
	return n;
}


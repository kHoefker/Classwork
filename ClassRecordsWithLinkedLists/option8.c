#include "lab4.h"

void option8(Node **head, char Category_Names[][30]) {
	Node *n = malloc(sizeof(Node));
	int id = 0;
	int idCheck = 1;
	char c;
	int i;

	/* get name from user */
	printf("Enter the Student's Name: ");
	c = getchar();
	if (c == '\n') c = getchar();
	i = 0;
	while (c != '\n') {
		n->Student.student_name[i++] = c;
		c = getchar();
	}
	n->Student.student_name[i] = '\0';
	
	/* get a non duplicated id from user */
	while(idCheck) {
		printf("Enter the Student's ID Number: ");
		scanf("%i", &id);
		idCheck = ID_isDuplicate(*head, id);
		if(idCheck) {
			printf("Student ID number entered was a duplicate.\n");
		}
	}
	n->Student.student_ID = id;
	
	/* read in other info from user */
	printf("Enter first %s score (use -1 if there is no score): ", Category_Names[0]);
	scanf("%f", &n->Student.Cat1.score1);
	
	printf("Enter second %s score (use -1 if there is no score): ", Category_Names[0]);
	scanf("%f", &n->Student.Cat1.score2);
	
	printf("Enter third %s score (use -1 if there is no score): ", Category_Names[0]);
	scanf("%f", &n->Student.Cat1.score3);
	
	printf("Enter first %s score (use -1 if there is no score): ", Category_Names[1]);
	scanf("%f", &n->Student.Cat2.score1);
	
	printf("Enter second %s score (use -1 if there is no score): ", Category_Names[1]);
	scanf("%f", &n->Student.Cat2.score2);
	
	printf("Enter third %s score (use -1 if there is no score): ", Category_Names[1]);
	scanf("%f", &n->Student.Cat2.score3);
	
	printf("Enter first %s score (use -1 if there is no score): ", Category_Names[2]);
	scanf("%f", &n->Student.Cat3.score1);
	
	printf("Enter second %s score (use -1 if there is no score): ", Category_Names[2]);
	scanf("%f", &n->Student.Cat3.score2);
	
	printf("Enter third %s score (use -1 if there is no score): ", Category_Names[2]);
	scanf("%f", &n->Student.Cat3.score3);
	
	printf("Enter first %s score (use -1 if there is no score): ", Category_Names[3]);
	scanf("%f", &n->Student.Cat4.score1);
	
	printf("Enter second %s score (use -1 if there is no score): ", Category_Names[3]);
	scanf("%f", &n->Student.Cat4.score2);
	
	printf("Enter third %s score (use -1 if there is no score): ", Category_Names[3]);
	scanf("%f", &n->Student.Cat4.score3);
	
	/* calculate remaining grades needed */
	calcStudent(n);
	
	/* finish initializing Node */
	n->Student.Final_Grade = -1;
	n->next = NULL;
	
	/* insert Node into the list */
	insertNode(head, n);
	
	/* print student info */
	printHeader(Category_Names);
	printStudent(n);
}


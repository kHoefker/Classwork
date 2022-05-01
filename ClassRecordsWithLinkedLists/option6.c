#include "lab4.h"

void option6(Node *head, char Category_Names[][30], int size) {
	int id;
	int correct = 2;
	int choice1, choice2;
	Node *n;
	
	/* get id from user */
	printf("Enter the Student ID #: ");
	scanf("%i", &id);
	
	printf("Hunting for %i\n", id);
	n = get_NodeforID(head, id);
	
	/* check for valid node */
	if(n == NULL){
		printf("\nERROR: Student ID number %i was not found in the list\n", id);
		return;
	}
	
	printf("Insert a Score for %s?  Enter 1, if yes. Enter 2, if no:  ", n->Student.student_name);
	scanf("%i", &correct);
	if (correct == 2) return;
	
	/* ask user what to change in Node */
	printf ("Which category?\n1) Quizzes\n2) Midterms\n3) Homework\n4) Final\n");
	printf("Enter 1, 2, 3, or 4: ");
	scanf("%i", &choice1);
	
	printf("Which score?\nEnter 1, 2, or 3: ");
	scanf("%i", &choice2);
	
	/* update selected score */
	printf("Enter New Score:  ");
	switch (choice1) {
		case 1 : {
			if (choice2 == 1) {
				scanf("%f", &n->Student.Cat1.score1);
			} else if (choice2 == 2) {
				scanf("%f", &n->Student.Cat1.score2);
			} else if (choice2 == 3) {
				scanf("%f", &n->Student.Cat1.score3);
			} else {
				printf("Please try again with valid input for score.");
				return;
			}
			break;
		}
		case 2 : {
			if (choice2 == 1) {
				scanf("%f", &n->Student.Cat2.score1);
			} else if (choice2 == 2) {
				scanf("%f", &n->Student.Cat2.score2);
			} else if (choice2 == 3) {
				scanf("%f", &n->Student.Cat2.score3);
			} else {
				printf("Please try again with valid input for score.");
				return;
			}
			break;
		}
		case 3 : {
			if (choice2 == 1) {
				scanf("%f", &n->Student.Cat3.score1);
			} else if (choice2 == 2) {
				scanf("%f", &n->Student.Cat3.score2);
			} else if (choice2 == 3) {
				scanf("%f", &n->Student.Cat3.score3);
			} else {
				printf("Please try again with valid input for score.");
				return;
			}
			break;
		}
		case 4 : {
			if (choice2 == 1) {
				scanf("%f", &n->Student.Cat4.score1);
			} else if (choice2 == 2) {
				scanf("%f", &n->Student.Cat4.score2);
			} else if (choice2 == 3) {
				scanf("%f", &n->Student.Cat4.score3);
			} else {
				printf("Please try again with valid input for score.");
				return;
			}
			break;
		}
		default : {
			printf("Please try again with valid input for which category and score.");
			return;
		}
	}
	
	/* print new studet info */
	printHeader(Category_Names);
	printStudent(n);
	
	printf("Note:  Category Cums, Current Grade and Final Grade have not been recalculated based on the new value entered.");
}


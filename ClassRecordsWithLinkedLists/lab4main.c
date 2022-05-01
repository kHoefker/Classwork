#include "lab4.h"

int main(int argc, char *argv[]) {
	FILE *records;
	FILE *updated;
	Node *head = NULL;
	char names[4][30];
	int i;
	Node *n = NULL;
	int go = 1;
	char *stop;
	char name[40];
	float f;
	Node *t;
	int size;
	int exit = 0;
	int option;
	void (*fp[7])(Node*, char[][30], int);

	/*
	 * Open data file
	 */
	records = fopen(argv[1], "r");

	/*
 	 * Read names from file
	 */
	fscanf(records,"%s %s %s %s\n", names[0], names[1], 
											names[2], names[3]);
	/*
	 * Insert data into a sorted linked list
	 */
	printf("Reading student information from file \"%s\"\n", argv[1]);
	while (!feof(records)) {
		n = populateNode(&records);
		insertNode(&head, n);
		size++;
	}
	printf("A total of %i student records were read from the file %s\n",
	 			size, argv[1]);
	 			
	/*
	 * Close data file
	 */
	fclose(records);	
	
	/*
	 * Initialize function pointers
	 */
	fp[0] = option1;
	fp[1] = option2;
	fp[2] = option3;
	fp[3] = option4;
	fp[4] = option5;
	fp[5] = option6;
	fp[6] = option7;
	
	/*
	 * Get options from user until they exit the program
	 */
	while (!exit) {
		printf("\n\n%s\n%s\n%s\n%s\n%s\n%s\n%s\n%s\n%s\n%s\n%s\n", 
		"Please enter an option between 1 and 10:",
		"1)  Print Student Scores by Student ID",
		"2)  Print Student Scores by Last Name",
		"3)  Print Student Scores for All Students",
		"4)  Recalculate Student Scores for a Single Student ID",
		"5)  Recalculate All Student Scores",
		"6)  Insert a score for a specific Student ID",
		"7)  Calculate Final Grades",
		"8)  Add a new student",
		"9)  Delete a student",
		"10) Exit Program");
		
		printf("Option: ");
		scanf("%i",&option);
		
	 	switch (--option) { /* Call function based on user input */
	 		case 0: fp[0](head, names, size); break;
	 		case 1: fp[1](head, names, size); break;
	 		case 2: fp[2](head, names, size); break;
	 		case 3: fp[3](head, names, size); break;
	 		case 4: fp[4](head, names, size); break;
	 		case 5: fp[5](head, names, size); break;
	 		case 6: fp[6](head, names, size); break;
	 		case 7: {
	 			option8(&head, names);
	 			size++;
	 			break;
	 		}
	 		case 8: {
	 			option9(&head, names);
	 			size--;
	 			break;
	 		}
	 		case 9: {
	 			option10(head, names, argv[2]); 
	 			exit = 1;
	 			break;
	 		}
	 		default:
	 			printf("Please enter a valid option.");
	 	}
	}
	
	
	return 0;
}

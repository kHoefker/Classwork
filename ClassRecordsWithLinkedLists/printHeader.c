#include "lab4.h"

void printHeader(char Category_Names[][30]) {
	/* print a formatted header */
	printf("\nStudent Name    \t   Student ID#%20s%33s%30s%33s\t\t\t    Current\tFinal\n", 			Category_Names[0], Category_Names[1], Category_Names[2], Category_Names[3]);
	printf("%17s%s", "", "\t\t\t\t      1       2       3       Cum\t   1       2       3     Cum\t 1       2       3       Cum       1       2       3     Cum  \tGrade\tGrade\n");
}

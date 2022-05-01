/* 
 * BY SUBMITTING THIS FILE TO CARMEN, I CERTIFY THAT I HAVE PERFORMED ALL OF THE 
 * WORK TO CREATE THIS FILE AND/OR DETERMINE THE ANSWERS FOUND WITHIN THIS
 * FILE MYSELF WITH NO ASSISTANCE FROM ANY PERSON (OTHER THAN THE INSTRUCTOR 
 * OR GRADERS OF THIS COURSE) AND I HAVE STRICTLY ADHERED TO THE TENURES OF THE 
 * OHIO STATE UNIVERSITY’S ACADEMIC INTEGRITY POLICY.
 */
#ifndef LAB4
#define LAB4 "lab4.h"

#include <stdio.h>
#include <stdlib.h>

struct Cat_Grade{
	float score1;
	float score2;
	float score3;
	float Cumulative;
};

struct Data {
	char student_name[40]; 
	int student_ID;
	struct Cat_Grade Cat1;
	struct Cat_Grade Cat2;
	struct Cat_Grade Cat3;
	struct Cat_Grade Cat4;
	float Current_Grade; 
	float Final_Grade;
};

typedef struct Node { 
	struct Data Student; 
	struct Node *next;
} Node;

void insertNode(Node **headPtr, Node *nPtr);

void calcGrade(struct Cat_Grade *c);

void calcStudent(Node *n);

Node *populateNode(FILE **input);

void option1(Node *head, char Category_Names[][30], int size);

void option2(Node *head, char Category_Names[][30], int size);

void option3(Node *head, char Category_Names[][30], int size);

void option4(Node *head, char Category_Names[][30], int size);

void option5(Node *head, char Category_Names[][30], int size);

void option6(Node *head, char Category_Names[][30], int size);

void option7(Node *head, char Category_Names[][30], int size);

void option8(Node **head, char Category_Names[][30]);

void option9(Node **head, char Category_Names[][30]);

void option10(Node *head, char Category_Names[][30], char *fName);

void printHeader(char Category_Names[][30]);

void printStudent(Node *s);

Node *get_NodeforID(Node *n, int ID);

Node **get_NodeforName(Node *head, char *name, int size);

int ID_isDuplicate(Node *head, int newStudentID);

int deleteNodefromID(Node **head, int StudentID);

void freeAll(Node *head);

int writeToDisk (Node *head, char catName[][30], char *fName);

#endif

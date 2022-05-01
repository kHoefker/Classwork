# BY SUBMITTING THIS FILE TO CARMEN, I CERTIFY THAT I HAVE PERFORMED ALL OF THE 
# WORK TO CREATE THIS FILE AND/OR DETERMINE THE ANSWERS FOUND WITHIN THIS
# FILE MYSELF WITH NO ASSISTANCE FROM ANY PERSON (OTHER THAN THE INSTRUCTOR 
# OR GRADERS OF THIS COURSE) AND I HAVE STRICTLY ADHERED TO THE TENURES OF THE 
# OHIO STATE UNIVERSITY’S ACADEMIC INTEGRITY POLICY.

# target all means all targets currently defined in this file
all: lab4.zip lab4

# this target is the .zip file that must be submitted to Carmen
lab4.zip: Makefile lab4main.c lab4.h insertNode.c populateNode.c calcGrade.c calcStudent.c option1.c option2.c option3.c option4.c option5.c option6.c option7.c option8.c option9.c option10.c get_NodeforID.c printStudent.c printHeader.c get_NodeforName.c ID_isDuplicate.c deleteNodefromID.c writeToDisk.c freeAll.c
	zip lab4 lab4main.c lab4.h insertNode.c populateNode.c calcGrade.c calcStudent.c option1.c option2.c option3.c option4.c option5.c option6.c option7.c option8.c option9.c option10.c get_NodeforID.c printStudent.c printHeader.c get_NodeforName.c ID_isDuplicate.c deleteNodefromID.c writeToDisk.c freeAll.c Makefile

# this target is the lab3 executable        ADD MORE REQUIREMENTS
lab4: lab4main.c lab4.h insertNode.c populateNode.c calcGrade.c calcStudent.c option1.c option2.c option3.c option4.c option5.c option6.c option7.c option8.c option9.c option10.c get_NodeforID.c printStudent.c printHeader.c get_NodeforName.c ID_isDuplicate.c deleteNodefromID.c writeToDisk.c freeAll.c
	gcc -ansi -pedantic lab4main.c insertNode.c populateNode.c calcGrade.c calcStudent.c option1.c option2.c option3.c option4.c option5.c option6.c option7.c option8.c option9.c option10.c get_NodeforID.c printStudent.c printHeader.c get_NodeforName.c ID_isDuplicate.c deleteNodefromID.c writeToDisk.c freeAll.c -o lab4 -g

# this target deletes all files produced from the Makefile
# so that a completely new compile of all items is required
clean:
	rm -rf lab4 lab4.zip

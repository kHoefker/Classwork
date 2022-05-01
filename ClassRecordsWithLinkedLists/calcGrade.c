#include "lab4.h"

void calcGrade(struct Cat_Grade *c) {
	float scores = 0;
	int div = 0;
	
	/*
	 * Calculate Cumulative, skipping any -1
	 */
	if (c->score1 != -1) {
		scores += c->score1;
		div++;
	}
	if (c->score2 != -1) {
		scores += c->score2;
		div++;
	}
	if (c->score3 != -1) {
		scores += c->score3;
		div++;
	}
	
	if (div == 0) { /* if all scores -1 */
		c->Cumulative = -1;
	} else {
		c->Cumulative = scores / div;
	}
}	

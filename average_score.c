#include "srs.h"

/**
 * This function calculates the average score
 */

double average_score(student_t **students)
{
	int i;
	double sum;

	sum = 0;
	for (i = 0; students[i] != NULL; i++)
	{
		sum += students[i]->score;
	}

	return (sum/i);
}

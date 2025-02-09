#include "srs.h"

/**
 * This function prints a remark about the student score
 * "student passed with x score" for score >= 40
 * "student failed with x score" for score < 40
 */
void remark(student_t *student)
{
	if (student->score < 40)
		printf("%s failed with %.2f marks\n", student->name, student->score);
	else
		printf("%s passed with %.2f marks\n", student->name, student->score);
}

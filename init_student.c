#include "srs.h"

/**
 * initialize a new student and returns a new student
 * allocates memory for a new student
 *
 * returns NULL if malloc fails
 */

student_t *init_student(char *name, int roll_number, double score)
{
	student_t *new_student;

	new_student = malloc(sizeof(student_t));
	if (new_student)
	{
		new_student->name = name;
		new_student->roll_number = roll_number;
		new_student->score = score;
		return (new_student);
	}

	return (NULL);
}

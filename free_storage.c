#include "srs.h"

/**
 * This function frees up the main storage
 */
void free_storage(student_t **students)
{
	int i;

	if (!students)
		return;

	for (i = 0; students[i] != NULL; i++)
	{
		free_student(students[i]);
	}
}

void free_student(student_t *student)
{
	free(student->name);
	free(student);
}

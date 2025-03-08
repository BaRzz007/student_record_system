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
		free(students[i]->name);
		free(students[i]);
	}
}

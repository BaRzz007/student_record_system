#include "srs.h"

/**
 * This function saves the student records to a permanent storage
 * in a file
 */
void save_to_file(student_t **students)
{
	int i;
	FILE *file;

	file = fopen("records.data", "w");

	for (i = 0; students[i] != NULL; i++)
	{
		fprintf(file, "Roll Number: %i Name: %s Score: %.2f\n",
				students[i]->roll_number,
				students[i]->name,
				students[i]->score);
	}

	fclose(file);
}

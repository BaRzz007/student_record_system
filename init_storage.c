#include "srs.h"

/**
 * Initialize the storage system
 */
int init_storage(student_t **students)
{
	int count, n, roll_number, *roll_num_ptr;
	double score, *score_ptr;
	char *name, *nameptr;
	FILE *file;
	student_t *student;

	//initialize count to keep track of the number of records in the system 
	count = 0;

	nameptr = malloc(BUFSIZE);
	roll_num_ptr = malloc(BUFSIZE);
	score_ptr = malloc(BUFSIZE);

	file = fopen("records.data", "r");

	if (!file)
		return (count);

	do
	{
		n = fscanf(file, "Roll Number: %i Name: %s Score: %lf\n", roll_num_ptr, nameptr, score_ptr);
		if (n == EOF)
			break;

		name = malloc(BUFSIZE);
		name = strcpy(name, nameptr);
		roll_number = *roll_num_ptr;
		score = *score_ptr;

		student = init_student(name, roll_number, score);
		count += add_record(students, student, count);
	}
	while (true);

	free(roll_num_ptr);
	free(nameptr);
	free(score_ptr);

	fclose(file);

	return (count);
}

#include "srs.h"

/**
 * Initialize the storage system, reloading data from file if it exists
 */
int init_storage(student_t **students)
{
	int count, n, roll_number, *roll_num_ptr, i;
	double score, *score_ptr;
	char *name, *nameptr;
	FILE *file;
	student_t *student;

	//initialize the array
	for (i = 0; i < STUDENT_MAX; i++)
	{
		students[i] = NULL;
	}

	//initialize count to keep track of the number of records in the system 
	count = 0;

	//allocate buffer memory
	nameptr = malloc(BUFSIZE);
	roll_num_ptr = malloc(BUFSIZE);
	score_ptr = malloc(BUFSIZE);

	//open a file from the current directory named records.data in read-only mode
	file = fopen("records.data", "r");

	//return the value of count, which will be 0 if the file doesn't exist
	if (!file)
		return (count);

	//runs at least once while there is still a line to read from the file
	do
	{
		//read a line from the file
		n = fscanf(file, "Roll Number: %i Name: %s Score: %lf\n", roll_num_ptr, nameptr, score_ptr);
		//break the loop if it is end-of-file
		if (n == EOF)
			break;

		//assign the read values to the corresponding variable type
		name = malloc(BUFSIZE);
		name = strcpy(name, nameptr);
		roll_number = *roll_num_ptr;
		score = *score_ptr;

		//initialize a student
		student = init_student(name, roll_number, score);
		//add the student to the storage and update count
		count += add_record(students, student, count);
	}
	while (true);

	//free all buffer memory
	free(roll_num_ptr);
	free(nameptr);
	free(score_ptr);

	//close the file
	fclose(file);

	return (count);
}

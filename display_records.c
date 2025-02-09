#include "srs.h"

/**
 * This function displays all the student records in the system
 */

void display_records(student_t **students)
{
	int i;

	printf("\n===========Student Records=============\n");
	for (i = 0; students[i] != NULL; i++)
	{
		printf("=====INDEX: %i=====\n", i + 1);
		display_record(students[i]);
	}
}

void display_record(student_t *student)
{
	
	printf("Roll Number: %i\nName: %s\nScore: %.2f\nRemark: %s\n\n",
		student->roll_number,
		student->name,
		student->score,
		student->score > 40 ? "Passed": "Failed");
}

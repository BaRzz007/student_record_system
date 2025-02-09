#include "srs.h"


/**
 * This is the entry point to the program
 *
 */

int main(void)
{
	int student_count, i;
	char *username;
	student_t *students[STUDENT_MAX];

	student_count = 0;
	username = NULL;
	welcome(username);

	//main_options(students, student_count)

	student_count += add(students, student_count);

	display_records(students);

	student_count += remove_student(students, 211);

	display_records(students);

	//free_storage(students);
	
	return (EXIT_SUCCESS);
}

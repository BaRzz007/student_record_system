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

	//interface(students, &students_count))
	while (true)
	{
		if (main_options(students, &student_count) == EXIT_INTERFACE)
			break;
	}

	//free_storage(students);
	
	return (EXIT_SUCCESS);
}

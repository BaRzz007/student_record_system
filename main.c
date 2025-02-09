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

	student_count += add(students, student_count);

	for (i = 0; students[i] != NULL; i++)
	{
		printf("%s scored %.2f\n", students[i]->name, students[i]->score);
	}

	student_count += remove_student(students, 211);
	printf("%i------------------------------\n", student_count);

	for (i = 0; students[i] != NULL; i++)
	{
		printf("%s scored %.2f\n", students[i]->name, students[i]->score);
	}
	
	return (EXIT_SUCCESS);
}

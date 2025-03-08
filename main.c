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

	//initialize the storage system
	student_count = init_storage(students);
	
	//Welcome the user
	welcome(username);

	//The interactive interface to the system
	interface(students, &student_count);

	//Free the memory bbefore exit
	free_storage(students);
	
	return (EXIT_SUCCESS);
}

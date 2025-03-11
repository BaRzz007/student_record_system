#include "srs.h"

/**
 * This function updates the information of a student
 */

void update(student_t *student)
{
	int prop;

	display_prop_option();
	prop = input_num("");

	switch (prop)
	{
		case NAME:
			student->name = input("Enter name to update: ");
			break;
		case ROLL_NUMBER:
			student->roll_number = input_num("Enter new roll number for student: ");
			break;
		case SCORE:
			student->score = input_num("Enter new score: ");
			break;
		default:
			printf("Invalid selection\n");
	}
}

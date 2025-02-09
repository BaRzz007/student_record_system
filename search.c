#include "srs.h"

/**
 * Search by roll number
 * Displays record if @display is set to true
 * Return: index of the record
 */
int search(student_t **students, int roll_number, bool display)
{
	int index;
	student_t *student;

	index = _search(students, roll_number, 0);
	if (display)
	{
		display_record(students[index]);
	}
	return (index);
}

/**
 * internal recursive search function
 */

int _search(student_t **students, int roll_number, int count)
{
	if (!students || students[count] == NULL)
		return (-1);
	else if (students[count]->roll_number == roll_number)
		return (count);
	return (_search(students, roll_number, count + 1));
}

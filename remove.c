#include "srs.h"

/**
 * This function removes a student from the array
 * Return: -1 on success
 */
int remove_student(student_t **students, int roll_number)
{
	int index;
	student_t *temp;

	if (!students)
	{
		printf("\nStorage is empty!\n");
		return (0);
	}
	
	temp = NULL;
	index = _search(students, roll_number, 0);

	if (index < 0)
	{
		printf("\nNo record with row number %i exists!\n", roll_number);
		return (0);
	}
	temp = _remove_student(students, index);
	display_record(temp);
	free_student(temp);
	printf("\nRemoved Successfully!\n");

	return (-1);
}

/**
 * removes a student from the storage
 */
student_t *_remove_student(student_t **students, int index)
{
	student_t *temp;

	//move the student marked for removal to the end of the array
	temp = NULL;
	temp = students[index];
	while (students[index + 1] != NULL)
	{
		students[index] = students[index + 1];
		students[index + 1] = temp;
		index++;
	}

	students[index] = NULL;

	return (temp);
}

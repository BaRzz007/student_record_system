#include "srs.h"

/**
 * This function removes a student from the array
 * Return: -1 on success
 */
int remove_student(student_t **students, int roll_number)
{
	int index;
	student_t *temp;
	
	index = _remove_student(students, roll_number);

	//return 0 if index is -1
	temp = students[index];
	free(temp);
	students[index] = NULL;

	return (-1);
}

int _remove_student(student_t **students, int roll_number)
{
	student_t *temp;
	int index;

	if (!students)
	{
		printf("Data storage is empty");
		return (-1);
	}

	index = search(students, roll_number, true);
	temp = students[index];
	while (students[index + 1] != NULL)
	{
		students[index] = students[index + 1];
		students[index + 1] = temp;
		index++;
	}
	return (index);
}

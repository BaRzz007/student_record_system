#include "srs.h"

/**
 * This function removes a student from the array
 * Return: -1 on success
 */
int remove_student(student_t **students, int roll_number)
{
	int index;
	student_t *temp;
	
	index = _remove_student(students, roll_number, 0);
	temp = students[index];
	free(temp);
	students[index] = NULL;

	return (-1);
}

int _remove_student(student_t **students, int roll_number, int count)
{
	student_t *temp;

	if (!students || students[count] == NULL)
	{
		return (-1);
	}
	else if (students[count]->roll_number == roll_number)
	{
		temp = students[count];
		while (students[count + 1] != NULL)
		{
			students[count] = students[count + 1];
			students[count + 1] = temp;
			count++;
		}
		return (count);
	}

	return (_remove_student(students, roll_number, count + 1));
}

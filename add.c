#include "srs.h"

#define YES 1

/**
 * This function adds a student to the end of an array
 * Return: 1 if student have been added successfully
 */

int add_records(student_t **students, int student_count)
{
	char *name;
	int roll_number, response, index;
	double score;
	student_t *student;
	
	roll_number = input_num("Please enter student's row number: ");
	index = search(students, roll_number, false);
	if (index > -1)
	{
		printf("Student row number already exists!\n");
		return (add_records(students, student_count));
	}
	name = input("Please enter student's name: ");
	score = input_num("Please enter student's score: ");

	student = init_student(name, roll_number, score);

	add_record(students, student, student_count);

	response = input_num("Do you want to add another student?\nYES: 1\nNO: 2\n");
	
	if (response == YES)
		return (1 + add_records(students, student_count + 1));
	
	return (1);
}

int add_record(student_t **students, student_t *student, int index)
{
	if (student)
		students[index] = student;

	return (1);
}

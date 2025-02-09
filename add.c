#include "srs.h"

#define YES 1

/**
 * This function adds a student to the end of an array
 * Return: 1 if student have been added successfully
 */

int add(student_t **students, int student_count)
{
	char *name;
	int roll_number, response;
	double score;
	student_t *student;
	
	name = input("Please enter student's name: ");
	roll_number = input_num("Please enter student's roll number: ");
	score = input_num("Please enter student's score: ");

	student = init_student(name, roll_number, score);

	students[student_count] = student;

	response = input_num("Do you want to add another student?\nYES: 1\nNO: 2\n");
	
	if (response == YES)
		return (1 + add(students, student_count + 1));
	
	return (1);
}

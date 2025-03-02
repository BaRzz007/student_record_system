#include "srs.h"

#define SHOW_ALL 1
#define ADD 2
#define REMOVE 3
#define UPDATE 4
#define SAVE 5
#define SORT 6
#define AVERAGE 7
#define SEARCH 8
#define EXIT 9

/**
 * This function executes the selected option
 */
int main_options(student_t **students, int *student_count)
{
	int response, roll_number, index, prop, count;
	double average;

	count = *student_count;
	printf("\nThere %s %i record%c in the system\n",
			*student_count > 1 ? "are": "is",
			*student_count,
			*student_count > 1 ? 's': '\0');
	display_main_options();

	response = input_num("Enter the corresponding number to select an option\n");

	switch (response)
	{
		case SHOW_ALL:
			display_records(students);
			//select_student(students, index)
			break;
		case ADD:
			*student_count += add_records(students, count);
			break;
		case REMOVE:
			printf("\n=====Remove Student Record=====\n");

			roll_number = input_num("Enter roll number of student: ");
			*student_count += remove_student(students, roll_number);

			printf("Removed Successfully!\n");
			break;
		case UPDATE:
			printf("\n====Updating Student Record====\n");

			roll_number = input_num("Enter roll number of student: ");
			index = search(students, roll_number, true);
			display_prop_option();
			prop = input_num("");
			
			update(students, index, prop);

			display_record(students[index]);
			printf("Updated Successfully!\n");
			break;
		case SORT:
			printf("Do sorting\n");

			//sort(students); the function creates and sorts a copy of the main array 
			break;
		case AVERAGE:
			average = average_score(students);

			printf("\nThe average score is %.2f\n", average);
			break;
		case SEARCH:
			roll_number = input_num("Enter roll number to search: ");
			index = search(students, roll_number, true);
			//select_student(students, index);
			break;
		case SAVE:
			save_to_file(students);
			printf("The records have been saved!\n");
			break;
		case EXIT:
			save_to_file(students);
			return (EXIT_INTERFACE);
		default:
			printf("Please select a valid option");
	}
	return (0);
}

/**
 * This function displays the top level options
 */
void display_main_options()
{
	printf("=================================\n");
	printf("<1> Show all records\n");
	printf("<2> Add a new record\n");
	printf("<3> Remove a record\n");
	printf("<4> Update a record\n");
	printf("<5> Save\n");
	printf("<6> Sort records by score\n");
	printf("<7> Get average score\n");
	printf("<8> Search by roll number\n");
	printf("<9> Exit\n");
}

void display_prop_option()
{
	printf("Select property to update\n");
	printf("Name <1>\nRoll Number <2>\nScore <3>\n");
}

/**
 * The interface
 */
void interface(student_t **students, int *student_count)
{
	while (true)
	{
		if (main_options(students, student_count) == EXIT_INTERFACE)
			break;
	}
}

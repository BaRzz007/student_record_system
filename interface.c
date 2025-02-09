#include "srs.h"

#define SHOW_ALL 1
#define ADD 2
#define REMOVE 3
#define UPDATE 4
#define SORT 5
#define AVERAGE 6
#define EXIT 7

/**
 * This function executes the selected option
 */
int main_options(student_t **students, int student_count)
{
	int response, roll_number, index, prop;

	printf("There are %i records in the system\n", student_count);
	display_main_options();

	response = input_num("Enter the corresponding number to select an option\n");

	switch (response)
	{
		case SHOW_ALL:
			display_records(students);
			//select_student(students)
			break;
		case ADD:
			add(students, student_count);
			break;
		case REMOVE:
			roll_number = input_num("Enter roll number of student: ");
			remove_student(students, roll_number);
			break;
		case UPDATE:
			roll_number = input_num("Enter roll number of student: ");
			index = search(students, roll_number, false);
			display_prop_option();
			prop = input_num("");
			update(students, index, prop);
			break;
		case SORT:
			printf("Do sorting\n");
			break;
		case AVERAGE:
			printf("Do average\n");
			break;
		case EXIT:
			return (1);
		default:
			("Please select a valid option");
	}
	return (0);
}

/**
 * This function displays the top level options
 */
void display_main_options()
{
	printf("\n=================================\n");
	printf("<1> Show all records\n");
	printf("<2> Add a new record\n");
	printf("<3> Remove a record\n");
	printf("<4> Update a record\n");
	printf("<5> Sort records by score\n");
	printf("<6> Get average score\n");
	printf("<7> Search by roll number\n");
}

void display_prop_option()
{
	printf("Select property to update");
	printf("Score <1>\nName <2>\n");
}

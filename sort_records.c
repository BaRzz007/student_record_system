#include "srs.h"

/**
 * This function sorts the records by score
 */

void sort_records(student_t **students, int student_count)
{
	student_t *sorted_arr[student_count];
	int i;

	for (i = 0; students[i] != NULL; i++)
		sorted_arr[i] = students[i];

	qsort(sorted_arr, student_count, sizeof(student_t *), compr);

	//printf("=====Sorting by score=====\n");
	i = 0;
	while (i < student_count)
	{
		display_record(sorted_arr[i]);
		i++;
	}

}

/**
 * This is the comparison function
 */
int compr(const void *i, const void *j)
{
	student_t *student1, *student2;

	student1 = *(student_t **) i;
	student2 = *(student_t **) j;

	if (student1->score < student2->score)
		return (1);
	else if (student1->score > student2->score)
		return (-1);
	return (0);
}

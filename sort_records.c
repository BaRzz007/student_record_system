#include "srs.h"

#define ASCENDING 1

/**
 * This function sorts the records by score
 */

void sort_records(student_t **students, int student_count)
{
	student_t *sorted_arr[student_count];
	int i, sortarr;
	int (*compr)(const void *, const void *);

	for (i = 0; students[i] != NULL; i++)
		sorted_arr[i] = students[i];

	printf("<1> Ascending\n<2> Descending (Default)\n");
	sortarr = input_num("");

	if (sortarr == ASCENDING)
	{
		printf("======Sorted in ascending order==>\n");
		compr = compr_asc;
	}
	else
	{
		printf("======Sorted in descending order==>\n");
		compr = compr_desc;
	}

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
 * compare in descending order
 */
int compr_desc(const void *i, const void *j)
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

/**
 * compare in asceding order
 */
int compr_asc(const void *i, const void *j)
{
	return (compr_desc(j, i));
}

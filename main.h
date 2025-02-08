#ifndef MAIN_H
#define MAIN_H

#include <stdlib.h>
#include <stdio.h>

#define MAXSIZE 1024

struct student
{
	char *name;
	int roll_number;
	double score;
}

typedef struct student student_t;

void welcome(char *username);

#endif

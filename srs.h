#ifndef SRS_H
#define SRS_H

#include <stdlib.h>
#include <stdio.h>

#define MAXSIZE 1024
#define STUDENT_MAX 1000

struct student
{
	char *name;
	int roll_number;
	double score;
};

typedef struct student student_t;

void welcome(char *username);
void remark(student_t *student);
student_t *init_student(char *, int, double);
int add(student_t **, int);
char *input(char *);
double input_num(char *);
int remove_student(student_t **, int);
int _remove_student(student_t **, int, int);
#endif

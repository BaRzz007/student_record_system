#ifndef SRS_H
#define SRS_H

#include <stdlib.h>
#include <stdio.h>
#include <stdbool.h>
#include <string.h>

#define BUFSIZE 1024
#define STUDENT_MAX 1000

#define EXIT_INTERFACE 1

//student property
#define NAME 1
#define ROLL_NUMBER 2
#define SCORE 3
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
int add_records(student_t **, int);
int add_record(student_t **, student_t *, int);
char *input(char *);
double input_num(char *);
int remove_student(student_t **, int);
int _remove_student(student_t **, int);
void update(student_t **, int, int);
void display_records(student_t **);
void display_record(student_t *);
void free_storage(student_t **);
int main_options(student_t **, int *);
void display_main_options();
void display_prop_option();
int search(student_t **students, int roll_number, bool display);
int _search(student_t **, int, int);
double average_score(student_t **students);
void save_to_file(student_t **);
void interface(student_t **, int *);
int init_storage(student_t **);

#endif

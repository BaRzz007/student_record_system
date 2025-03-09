#include <errno.h>
#include "srs.h"

/**
 * get_input - This function gets input from stdin
 * @prompt: prompt to the user
 * Return: input string
 */

char *input(char *prompt)
{
	char *buffer;

	buffer = malloc(BUFSIZE);
	printf("%s", prompt);
	scanf("%s", buffer);

	return (buffer);
}

/**
 * input_num - This function gets a numerical input from stdin
 * @prompt: prompt to the user
 * Return: double type number
 */

double input_num(char *prompt)
{
	char *input_str, *endptr;
	double input_num;

	do
	{
		errno = 0;
		input_str = input(prompt);
		//convert string to its numeric value
		input_num = strtod(input_str, &endptr);
		if (errno != 0 || *endptr != '\0')
			fprintf(stderr, "Pleae enter a valid number!\n");
	}
	while ((errno != 0) || (*endptr != '\0'));

	free(input_str);

	return (input_num);
}

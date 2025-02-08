#include "main.h"

/**
 * This method welcomes and ggreets the user
 *
 */
void welcome(char *user)
{
	user = malloc(MAXSIZE);
	
	printf("Welcome to Miva Open University\n");

	printf("Please enter your name ");

	scanf("%s", user);

	printf("Hello, %s\n", user);

	free(user);
}

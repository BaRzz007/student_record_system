#include "srs.h"

/**
 * This method welcomes and ggreets the user
 *
 */
char *welcome()
{
	char *user = NULL;
	
	printf("Welcome to Miva Open University\n");
	user = input("Please enter your name ");
	printf("\n=======Hello, %s=======\n", user);

	return (user);
}

#include "srs.h"

/**
 * This method welcomes and ggreets the user
 *
 */
void welcome(char *user)
{
	
	printf("Welcome to Miva Open University\n");
	user = input("Please enter your name ");
	printf("\n=======Hello, %s=======\n", user);

	free(user);
}

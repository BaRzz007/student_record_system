#include "srs.h"

/**
 * greets the user goodbye
 */
void bye(char * user)
{
	printf("Bye %s\n", user);
	free(user);
}

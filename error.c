#include "main.h"

/**
 * print_error - Print an error message.
 */

void print_error(void)
{
	fprintf(stderr, "./hsh: No such file or directory\n");
	exit(EXIT_FAILURE);
}

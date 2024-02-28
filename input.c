#include "main.h"

/**
 * read_input - Reads a line of input from the user.
 *
 * Return: A pointer to the input buffer, or NULL if errror occurs
 */
char *read_input(void)
{
	char *input = NULL;
	size_t input_size = 0;
	ssize_t characters_read;

	/*Read input*/
	characters_read = getline(&input, &input_size, stdin);
	if (characters_read == -1)
	{
		/*Check if reading from a pipe or file*/
		if (!isatty(STDIN_FILENO))
		{
			/*Reading from a pipe or file,*/
			exit(EXIT_FAILURE);
		}
		else
		{
			/*Reading from terminal, print error*/
			print_error();
		}
	}
	return (input);
}


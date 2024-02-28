#include "main.h"


/**
 * main - Entry point of the shell.
 *
 * Return: Always 0 (Success).
 */
int main(void)
{
	char *input;
	char *args[MAX_ARGS];

	while (1)
	{
		display_prompt();
		input = read_input();

		tokenize_input(input, args);
		execute_command(args);

		free(input);
	}

	return (EXIT_SUCCESS);
}

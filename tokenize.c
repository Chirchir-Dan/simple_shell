#include "main.h"

/**
 * tokenize_input - Tokenizes the user input to
 * extract command and its arguments.
 * @input: The user input containing the command.
 * @args: Array to store the command and arguments
 *
 * Return: 0 on single command, -1 if arguments are passed.
 */
void tokenize_input(char *input, char **args)
{
	char *token;
	int i = 0;

	 /*initialize strtok to tokenize input*/
	token = strtok(input, " \t\n");

	/*continue tokenizing untill no more tokens/max args reached*/
	while (token != NULL && i < MAX_ARGS - 1)
	{
		/*Store token in args array*/
		args[i++] = token;

		/*Get next token */
		token = strtok(NULL, " \t\n");
	}
	/*Ensure last element of args is NULL-terminated*/
	args[i] = NULL;
}

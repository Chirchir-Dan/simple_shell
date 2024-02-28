#include "main.h"

/**
 * execute_command - Execute a command entered by the user.
 * @args: The array containing the command and it's argumnets.
 */

void execute_command(char *args[])
{
	pid_t pid;
	int status;

	if (args[1] != NULL)
	{
		fprintf(stderr, "./shell: No such file or directory\n");
		return;
	}

	pid = fork();
	if (pid == -1)
	{
		print_error();
	}
	if (pid == 0)
	{
		/* Child process*/
		if (execve(args[0], args, NULL) == -1)
		{
			print_error();
		}
	}
	else
	{
		/*parent process*/
		if (waitpid(pid, &status, 0) == -1)
		{
			print_error();
		}
	}

}


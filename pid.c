#include "shell.h"

/**
 * run - Execute a command in the shell.
 *
 * @Arg_str: string argument of the shell.
 * @ct_output: output of the argument.
 *
 * Return: output.
 */
int run(char **Arg_str, int ct_output)
{
	pid_t pid;
	int sts;

	pid = fork();

	if (pid == 0)
	{
		if (execve(Arg_str[0], Arg_str, NULL) == -1)
		perror("Error: execve");
	}
	else if (pid == -1)
		perror("Error: Fork failure");
	else
	{
		wait(&sts);
		if (WIFEXITED(sts))
		ct_output = WEXITSTATUS(sts);
	}

	return (ct_output);
}

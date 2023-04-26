#include "shell.h"

/**
 * built_in - it executes built-in commands.
 *
 * @Arg_str: argument string.
 * @ct_output: output of the argument.
 * @row: row of arguments.
 *
 * Return: -1 and 0.
 *
 */

int built_in(char **Arg_str, int ct_output, char *row)
{
	char *built_box[2] = {"exit", "env"};
	int i = 0, size_env;
	char *env = NULL;

	if (string_compare(built_box[0], Arg_str[0]) == 0)
	{
		free(Arg_str);
		free(row);
		exit(ct_output);
	}

	else if (string_compare(built_box[1], Arg_str[0]) == 0)
	{
		for (i = 0; environ[i]; i++)
		{
			env = environ[i];
			size_env = string_length(env);
			write(STDOUT, env, size_env);
			write(STDOUT, "\n", 1);
		}
	}

	return (0);
}

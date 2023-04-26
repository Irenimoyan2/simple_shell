#include "shell.h"

/**
 * execute- Check if command is built-in
 *
 * @Arg_str: argument string in shell.
 * @ct_output: output of the argument.
 * @row: row of the  arguments.
 *
 * Return: returns other than exit or env
 */

int execute(char **Arg_str, int ct_output, char *row)
{
	char *built_in_cmds[2] = {"exit", "env"};

	if (*Arg_str == NULL)
		return (1);

	else if (string_compare(built_in_cmds[0], Arg_str[0]) == 0)
		return (built_in(Arg_str, ct_output, row));

	else if (string_compare(built_in_cmds[1], Arg_str[0]) == 0)
		return (built_in(Arg_str, ct_output, row));

	else
		return (compare_args(Arg_str, ct_output));
}

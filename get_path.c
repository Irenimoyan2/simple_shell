#include "shell.h"

/**
 * get_env - Get PATH environment variable.
 *
 * Return: PATH.
 */
char *get_env(void)
{
	int i;
	char **env = NULL, *path = NULL;

	env = environ;

	for (i = 0; env[i] != NULL; i++)
	{
		if (string_len_compare("PATH", env[i], 4) == 0)
			path = env[i];
	}

	if (path != NULL)
	{
		while (*path != '=')
			path++;

		path++;
	}

	return (path);
}

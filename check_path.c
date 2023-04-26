#include "shell.h"

/**
 * check_path - Check if command exists in one
 * of the directories listed in $PATH
 *
 * @Arg_str: argument string.
 *
 * Return: path to command if it exists in $PATH, otherwise original command
 */

char *check_path(char **Arg_str)
{
	char *path_var = getenv("PATH");
	char *CP_PATH = NULL;
	char *command = Arg_str[0];
	struct stat st;
	size_t size;
	char *path_token;

	if (!path_var)
		return (command);

	path_token = strtok(path_var, ":");

	while (path_token)
	{
		size = strlen(path_token) + strlen(command) + 2;
		CP_PATH = malloc(sizeof(char) * size);

		string_copy(CP_PATH, path_token);
		string_concatenate(CP_PATH, "/");
		string_concatenate(CP_PATH, command);

		if (stat(CP_PATH, &st) == 0 && st.st_mode & X_OK)
			return (CP_PATH);

		path_token = strtok(NULL, ":");
		free(CP_PATH);
	}

	return (command);
}

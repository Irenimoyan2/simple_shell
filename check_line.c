#include "shell.h"

/**
 * read_row - Read the input line.
 *
 * Return: Pointer to input string.
 */
char *read_row(void)
{
	char *input = NULL;
	size_t bufsize = 0;
	int chars_read = getline(&input, &bufsize, stdin);

	if (chars_read == EOF)
	{
		free(input);
		if (isatty(STDIN) != 0)
			write(STDOUT, "\n", 1);
		exit(EXIT_SUCCESS);
	}

	return (input);
}

#include "shell.h"

/**
 * string_length - Counts string characters.
 *
 * @a: String to count the characters of.
 *
 * Return: Number of characters in the string.
 */

int string_length(char *a)
{
	int b = 0;

	while (a[b] != '\0')
		b++;

	return (b);
}

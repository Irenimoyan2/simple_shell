#include "shell.h"

/**
 * string_copy - Copies the strings.
 *
 * @dest: Destination.
 * @src: Source.
 *
 * Return: Pointer to dest.
 */

char *string_copy(char *dest, char *src)
{
	int i;

	for (i = 0; src[i] != '\0'; i++)
		dest[i] = src[i];

	dest[i] = '\0';

	return (dest);
}

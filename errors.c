#include "shell.h"

/**
 * print_error - Print error message.
 *
 * @CMD: Command.
 */

void print_error(char *CMD)
{
	int length = 0;

	length = string_length(CMD);

	write(STDERR, CMD, length);
	write(STDERR, ": not found\n", 12);
}

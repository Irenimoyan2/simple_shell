#include <stdlib.h>
#include "shell.h"
/**
 * _calloc -  takes two arguments, the number of elements to allocate memory
 * @nmemb: number of elements
 * @size: the size of each element in bytes
 * Return: nothing or zero
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *p = NULL;
	unsigned int i;

	if (nmemb == 0 || size == 0)
	{
		return (NULL);
	}
	p = malloc(nmemb * size);
	if (p == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < (nmemb * size); i++)
	{
		*((char *)(p) + i) = 0;
	}
	return (p);
}


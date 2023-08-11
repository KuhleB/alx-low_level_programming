#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * *_calloc - allocates memory for an array, using malloc
 * @nmemb: number of array memn
 * @size: size of array
 * Return: pointer to allocated memory
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *p;

	if (nmemb == 0 || size == 0)
		return (NULL);
	p = calloc(nmemb, size);

	if (p == NULL)
		return (NULL);

	else
		return (p);
}

#include "main.h"
#include <stdlib.h>

/**
 * array_range - creates an array of integers.
 * @min: min value
 * @max: max value
 * Return: pointer to newly array.
 * if man > mix, returns NULL.
 * if malloc fails, returns NULL.
 */

int *array_range(int min, int max)
{
	int *p;
	int a;

	if (min > max)
		return (NULL);

	p = malloc(sizeof(*p) * ((max - min) + 1));

	if (p == NULL)
		return (NULL);

	for (a = 0; min <= max; a++)
		p[a] = min++;
	return (p);
}

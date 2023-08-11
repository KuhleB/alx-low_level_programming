#include <stdlib.h>
#include "main.h"

/**
 * array_range - creates an array of integers
 * @min: min values 
 * @max: max values 
 * Return: pointer to the new array
 */

int *array_range(int min, int max)
{
	int a, z;
	int *p;

	if (min > max)
		return (NULL);

	z = max - min + 1;

	p = malloc(sizeof(int) * z);

	if (p == NULL)
		return (NULL);

	for (a = 0; min <= max; a++)
		p[a] = min++;

	return (p);
}

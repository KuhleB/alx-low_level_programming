#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * create_array - creates an array of characters and initializes
 * it with a specific char
 * @c: the char to assign
 * @size: input for the size of array
 *
 * Return: a pointer to the array or NULL if it fails
 */

char *create_array(unsigned int size, char c)
{
	char *arr;
	unsigned int i;
	
	arr = malloc(sizeof(char) * size);
	if (size == 0 || arr == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < size; i++)
		arr[i] = c;
	return (arr);
}

#include "main.h"
#include <stdlib.h>

/**
 * _realloc - reallocates a memory block.
 * @ptr: pointer to memory previously allocated.
 * @old_size: size of space allocated
 * @new_size: new size of new memory block.
  * Return: pointer.
 * if new_size == old_size, return pointer unchanged.
 * if malloc fails, returns NULL.
 */

void *_realloc(void *ptr, unsigned int old_size,
		unsigned int new_size)
{
	if (new_size == 0 && ptr != NULL)
	{
		free(ptr);
		return (NULL);
	}

	if (ptr == NULL)
		ptr = malloc(new_size);

	if (new_size == old_size)
		return (ptr);

	free(ptr);
	ptr = malloc(new_size);

	return (ptr);
}

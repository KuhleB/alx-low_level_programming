#include "main.h"

/**
 * _memcpy - copies n bytes from memory area src
 * to memory area dest
 * @dest: where memory is stored
 * @src: where memory is copied
 * @n: number of bytes
 *
 * Return: the copied memory and number of bytes changed
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	int m = 0;
	int c = n;

	for (; m < c; m++)
	{
		dest[m] = src[m];
		n--;
	}
	return (dest);
}

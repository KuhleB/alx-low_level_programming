#include "main.h"

/**
 * _memset - fills the first n bytes of memory area
 * pointed to by s, with the constant byte b
 * @s: the starting address of memory to be filled
 * @b: the wanted value
 * @n: number of bytes to be changed
 *
 * Return: array with new value for n bytes
 */

char *_memset(char *s, char b, unsigned int n)
		{
			int m = 0;

			for (; n > 0; m++)
			{
				s[m] = b;
				n--;
			}
			return (s);
		}

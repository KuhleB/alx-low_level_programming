#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * _strdup - returns a pointer to a newly allocated space
 * in memory,containing a copy of the string given parameters
 * @str: character
 * Return: pointer on success
 */

char *_strdup(char *str)
{
	char *c;
	unsigned int p, y;

		if (str == NULL)
		{
			return (NULL);
		}

		p = 0;

		while (str[p] != '\0')
		{
			p++;
		}
		c = malloc(sizeof(char) * (p + 1));

		if (c == NULL)
		{
			return (NULL);
		}
		for (y = 0; str[y]; y++)
		{
			c[y] = str[y];
		}
		return (c);
}

#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * string_nconcat - Writes a function that concatenates two strings
 * @s1: string 1
 * @s2: string 2
 * @n: number to concatenate from s2
 * Return: pointer to  allocated memory
 * if malloc fails - status value = 98
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int cs1, cs2, a, b;
	char *p;

	if (s1 == NULL || s2 == NULL)
		return ("");

	for (cs1 = 0; s1[cs1] != '\0'; cs1++)
		;
	for (cs2 = 0; s2[cs2] != '\0'; cs2++)
		;

	if (n > cs2)
		n = cs2;

	b = cs1 + n;
	p = malloc(b + 1);

		if (p == NULL)
		return (NULL);

	for (a = 0; a < b; a++)
{
	if (a < cs1)
	p[a] = s1[a];
}
{
	p[a] = s2[a - cs1];
	p[a] = '\0';
}
	return (p);
}

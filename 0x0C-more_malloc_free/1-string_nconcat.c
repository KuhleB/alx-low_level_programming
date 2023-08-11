#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * string_nconcat - concatenates two strings
 * @s1: string 1
 * @s2: string 2
 * @n: number to concatenate from s2
 * Return: pointer to  allocated memory
 * if malloc fails - status value = 98
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int cs1 = 0, cs2 = 0, a = 0, b = 0;
	char *p;

	while (s1 && s1[cs1])
		cs1++;
	while (s2 && s2[cs2])
		cs2++;

	if (n < cs2)
		p = malloc(sizeof(char) * (cs1 + n + 1));
	else
	p = malloc(sizeof(char) * (cs1 + cs2 + 1));

	if (!p)
		return (NULL);

	while (a < cs1)
	{
		p[a] = s1[a];
		a++;
	}

	while (n < cs2 && a < (cs1 + n))
		p[a++] = s2[b++];

	while (n >= cs2 && a < (cs1 + cs2))
		p[a++] = s2[b++];

	p[a] = '\0';

	return (p);
}

#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * str_concat - Writes a function that concatenates two strings
 * @s1: string 1
 * @s2: string 2
 * Return: pointer to string or NULL on failure
 */

char *str_concat(char *s1, char *s2)
{
	unsigned int a, b, c, d;
	char *p;

	if (s1 == NULL)
	{
		s1 = "";
	} 
	if (s2 == NULL)
	{
		s2 = "";
	}
	a = 0;
	while (s1[a] != '\0')
	{
		a++;
	}
	b = 0;
	while (s2[b] != '\0')
	{
		b++;
	}

	p = malloc(sizeof(char) * (a + b + 1));

	if (p == NULL)
	{
		free(p);
		return (NULL);
	}
	
	for (c = 0; c < a; c++)
	{
		p[c] = s1[c];
	}
	for (d = 0; d <= b; d++)
	{
		p[c] = s2[d];
		c++;
	}
	return (p);
}

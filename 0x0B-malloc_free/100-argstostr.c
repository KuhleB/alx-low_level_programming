#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * argstostr - concatenates all the arguments of your program
 * @ac: the argument count
 * @av: the argument vector
 * Return: pointer to array
 */

char *argstostr(int ac, char **av)
{
	char *a;
	int q, r, s = 0, t = 0;

	if (ac == 0 || av == NULL)
		return (NULL);

	for (q = 0; q < ac; q++)
	{
		for (r = 0; av[q][r]; r++)
			t++;
	}
	t += ac;

	a = malloc(sizeof(char) * t + 1);
	if (a == NULL)
		return (NULL);

	for (q = 0; q < ac; q++)
	{
		for (r = 0; av[q][r]; r++)
		{
			a[s] = av[q][r];
			s++;
		}
		if (a[s] == '\0')
		{
			a[s++] = '\n';
		}
	}
		return (a);
}


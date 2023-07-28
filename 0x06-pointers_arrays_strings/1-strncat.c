#include "main.h"

/**
 * _strncat - concatenate two strings, use at most n bytes from src
 * @dest: input value
 * @src: input value
 * @n: input value
 * Return: dest
 */
char *_strncat(char *dest, char *src, int n)
{
	int a;
	int i;

	a = 0;
	while (dest[a] != '\0')
	{
		a++;
	}
	i = 0;
	while (i < n && src[i] != '\0')
	{
		dest[a] = src[i];
		a++;
		i++;
	}
	dest[a] = '\0';
	return (dest);
}

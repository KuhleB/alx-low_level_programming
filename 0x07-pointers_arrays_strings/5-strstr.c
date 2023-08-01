#include "main.h"

/**
 * _strstr - finds the first occurence of substring needle
 * in the string haystack
 * @haystack: string input
 * @needle: substring input
 * Return: Always 0.
 */

char *_strstr(char *haystack, char *needle)
{
	for (; *haystack != '\0'; haystack++)
	{
		char *h = haystack;
		char *n = needle;

		while (*h == *n && *n != '\0')
		{
			h++;
			n++;
		}
		if (*n == '\0')
			return (haystack);
	}
	return (0);
}



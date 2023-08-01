#include "main.h"
#include <stdio.h>

/**
 * _strchr - returns a pointer to the first occurance of
 * the character c in the string s
 * @s: string input
 * @c: char input
 * Return: 0 (on success)
 */

char *_strchr(char *s, char c)
{
	int a = 0;
	
	for (; s[a] >= '\0'; a++)
	{
		if (s[a] == c)
			return (&s[a]);
	}
	return (0);
}
